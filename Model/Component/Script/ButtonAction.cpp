#include "ButtonAction.hpp"

using namespace components;

ButtonAction::ButtonAction(std::string strName, AssetType ETag) : Component(strName, ComponentType::SCRIPT) {
    this->ETag = ETag;
}

void ButtonAction::perform() {
    ButtonInput* pInput = (ButtonInput*)this->getOwner()->findComponentByName(this->pOwner->getName() + " Input");/* [TODO] : Search for [ButtonInput]. */

    if(pInput == NULL) {
        std::cout << "[ERROR] : One or more dependencies are missing." << std::endl;
    }
    else {
        if(pInput->getInteract() && this->ETag == AssetType::MAIN_MENU_PLAY_BUTTON) {
            SceneManager::getInstance()->loadScene(SceneTag::GAME_SCENE);
        }
    }   
}
