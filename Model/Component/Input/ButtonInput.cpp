#include "ButtonInput.hpp"

using namespace components;

ButtonInput::ButtonInput(std::string strName) : GeneralInput(strName){
    this->bInteracted = false;
}

void ButtonInput::perform(){
    switch(this->CEvent.type){
        case sf::Event::MouseButtonPressed:
            processMouseInput(CEvent, true);
            break;
        case sf::Event::MouseButtonReleased:
            processMouseInput(CEvent, false);
            break;
        default:
            break;
    }
}

void ButtonInput::processMouseInput(sf::Event CEvent, bool isPressed){
    if(CEvent.mouseButton.button == sf::Mouse::Left){
        if(this->getOwner()->getSprite()->getGlobalBounds().contains(float(CEvent.mouseButton.x), float(CEvent.mouseButton.y))){
            this->bInteracted = isPressed;
        }
        else{
            this->bInteracted = false;
        }
    }
}
        
bool ButtonInput::getInteract(){
    return this->bInteracted;
}