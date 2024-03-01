#include "Background.hpp"

using namespace entities;

Background::Background(std::string strName, AnimatedTexture* pAnimatedTexture) : GameObject(strName, pAnimatedTexture) {

}

void Background::initialize(){
    Renderer* pRenderer = new Renderer(this->strName + " Renderer");
    pRenderer->assignDrawable(this->pSprite);
    this->attachComponent(pRenderer);
}