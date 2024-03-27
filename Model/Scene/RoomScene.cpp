#include "RoomScene.hpp"

using namespace scenes;

RoomScene::RoomScene(sf::RenderWindow* pWindow){
    this->pWindow = pWindow;
}

void RoomScene::onLoadResources(){
    TextureManager::getInstance()->loadLevel();
}

void RoomScene::onLoadObjects(){

}

void RoomScene::onUnloadResources(){
    TextureManager::getInstance()->clearAll();
}
    
void RoomScene::createTiles(){
    AnimatedTexture* pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::LEVEL_TILE));
    Tile* pTile = new Tile("Tile", pTexture);
    this->registerObject(pTile);
}

void RoomScene::createPlayer(){
    AnimatedTexture* pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::PLAYER));
    Player* pPlayer = new Player("Player", pTexture);
    this->registerObject(pPlayer);
}