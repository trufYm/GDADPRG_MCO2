#include "MainMenuScene.hpp"

using namespace scenes;

MainMenuScene::MainMenuScene(sf::RenderWindow* pWindow) : Scene(SceneTag::MAIN_MENU_SCENE){
    this->pWindow = pWindow;
}

void MainMenuScene::onLoadResources(){
    TextureManager::getInstance()->loadMainMenu();
}

void MainMenuScene::onLoadObjects(){
    this->createBackground();
    this->createButtons();
}

void MainMenuScene::onUnloadResources(){
    TextureManager::getInstance()->clearAll();
}

void MainMenuScene::createBackground(){
    AnimatedTexture* pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::MAIN_MENU_BACKGROUND));
    Background* pBackground = new Background("Background", pTexture);
    this->registerObject(pBackground);
}

void MainMenuScene::createButtons(){
    AnimatedTexture* pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::MAIN_MENU_PLAY_BUTTON));
    Button* pPlayButton = new Button("PlayButton", pTexture, AssetType::MAIN_MENU_PLAY_BUTTON);
    this->registerObject(pPlayButton);

    pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::MAIN_MENU_LEADERBOARD_BUTTON));
    Button* pLeaderboardButton = new Button("LeaderboardButton", pTexture, AssetType::MAIN_MENU_LEADERBOARD_BUTTON);
    this->registerObject(pLeaderboardButton);

    pTexture = new AnimatedTexture(TextureManager::getInstance()->getTexture(AssetType::MAIN_MENU_EXIT_BUTTON));
    Button* pExitButton = new Button("ExitButton", pTexture, AssetType::MAIN_MENU_EXIT_BUTTON, pWindow);
    this->registerObject(pExitButton);
}