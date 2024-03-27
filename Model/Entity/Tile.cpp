#include "Tile.hpp"

using namespace entities;

Tile::Tile(std::string strName, AnimatedTexture* pTexture) : GameObject(strName, pTexture){

}

void Tile::initialize(){
    Renderer* pRenderer = new Renderer(this->strName + " Renderer");
    pRenderer->assignDrawable(this->pSprite);
    this->attachComponent(pRenderer);
}

sf::FloatRect Tile::getGlobalBounds(){
    return this->pSprite->getGlobalBounds();
}

