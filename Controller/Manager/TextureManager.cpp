#include "TextureManager.hpp"

using namespace managers;

void TextureManager::clearAll(){
    for(auto& i : this->mapTexture){
        for(auto ptr : i.second){
            delete ptr;
        }
        i.second.clear();
    }

    this->mapTexture.clear();
}

void TextureManager::loadMainMenu(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Main Menu/main_menu_background.png");
    this->mapTexture[AssetType::MAIN_MENU_BACKGROUND].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Main Menu/main_menu_play_button.png");
    this->mapTexture[AssetType::MAIN_MENU_PLAY_BUTTON].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Main Menu/main_menu_leaderboard_button.png");
    this->mapTexture[AssetType::MAIN_MENU_LEADERBOARD_BUTTON].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Main Menu/main_menu_exit_button.png");
    this->mapTexture[AssetType::MAIN_MENU_EXIT_BUTTON].push_back(pTexture);
}

void TextureManager::loadGame(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Space Impact/game_background.png");
    this->mapTexture[AssetType::GAME_BACKGROUND].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/Space Impact/Player/this_ship_be_otp.png");
    this->mapTexture[AssetType::PLAYER].push_back(pTexture);
}

void TextureManager::loadDayStart(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);
}

void TextureManager::loadEvaluation(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);
}

void TextureManager::loadShip(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);
}

void TextureManager::loadLevel(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);
}

void TextureManager::loadLeaderboard(){
    sf::Texture* pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);

    pTexture = new sf::Texture();
    pTexture->loadFromFile("View/Image/...");
    // this->mapTexture[AssetType::...].push_back(pTexture);
}


std::vector<sf::Texture*> TextureManager::getTexture(AssetType EKey){
    return this->mapTexture[EKey];
} 

sf::Texture* TextureManager::getTextureAt(AssetType EKey, int nFrame){
    return this->mapTexture[EKey][nFrame];
}

/* SINGLETON CODE */
TextureManager* TextureManager::P_SHARED_INSTANCE = NULL;
TextureManager::TextureManager() {}
TextureManager::TextureManager(const TextureManager&) {}
TextureManager* TextureManager::getInstance() {
    if(P_SHARED_INSTANCE == NULL)
        P_SHARED_INSTANCE = new TextureManager();
    
    return P_SHARED_INSTANCE;
}