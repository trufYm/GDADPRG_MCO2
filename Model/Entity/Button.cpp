#include "Button.hpp"

using namespace entities;

Button::Button(std::string strName, AnimatedTexture* pTexture, AssetType ETag) : GameObject(strName, pTexture){
    this->ETag = ETag;
}
        
void Button::initialize(){
    switch(this->ETag){
        case AssetType::MAIN_MENU_PLAY_BUTTON:
            this->pSprite->setPosition(541.0f, 335.0f);
            break;
        case AssetType::MAIN_MENU_LEADERBOARD_BUTTON:
            this->pSprite->setPosition(391.5f, 455.0f);
            break;
        case AssetType::MAIN_MENU_EXIT_BUTTON:
            this->pSprite->setPosition(541.0f, 575.0f);
            break;

    }

    ButtonInput* pButtonInput = new ButtonInput(this->strName + " Input");
    this->attachComponent(pButtonInput);

    ButtonAction* pButtonAction = new ButtonAction(this->strName + " Action", ETag);
    this->attachComponent(pButtonAction);

    Renderer* pRenderer = new Renderer(this->strName + " Renderer");
    pRenderer->assignDrawable(this->pSprite);
    this->attachComponent(pRenderer);
}