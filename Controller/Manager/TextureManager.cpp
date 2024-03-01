#include "TextureManager.hpp"

using namespace managers;

void TextureManager::loadAll() {
    std::cout << "All Loaded!" << std::endl;

    sf::Texture* pTexture = new sf::Texture();

    if(!pTexture->loadFromFile("View/Image/caveman.png"))
        std::cout << "ERROR" << std::endl;
    
    //Dictionary - string value pair -> give string return vector
    this->mapTexture[AssetType::PLAYER].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/ancient.png");
    this->mapTexture[AssetType::PLAYER].push_back(pTexture);
}

void TextureManager::loadMainMenu(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/main_menu_background.png");
    this->mapTexture[AssetType::MAIN_MENU_BACKGROUND].push_back(pTexture);
}

void TextureManager::loadGame(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Space Impact/game_background.png");
    this->mapTexture[AssetType::GAME_BACKGROUND].push_back(pTexture);
}

void TextureManager::clearAll(){
    int iIndex = 0;
    for(auto i = this->mapTexture.begin(); i != this->mapTexture.end(); i++){
        delete i->second[iIndex];
        iIndex++;
    }

    this->mapTexture.clear();
}

std::vector<sf::Texture*> TextureManager::getTexture(AssetType EKey){
    return this->mapTexture[EKey];
} 

sf::Texture* TextureManager::getTextureAt(AssetType EKey, int nFrame){
    return this->mapTexture[EKey][nFrame];
}

TextureManager* TextureManager::P_SHARED_INSTANCE = NULL;

TextureManager::TextureManager() {}
TextureManager::TextureManager(const TextureManager&) {}

TextureManager* TextureManager::getInstance() {
    if(P_SHARED_INSTANCE == NULL){
        P_SHARED_INSTANCE = new TextureManager();
    }

    return P_SHARED_INSTANCE;
}