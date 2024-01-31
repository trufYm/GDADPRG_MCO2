#include "TextureManager.hpp"

using namespace managers;

void TextureManager::test(){
    std::cout << "TextureManager ok!" << std::endl;
}

TextureManager* TextureManager::P_SHARED_INSTANCE = NULL;

TextureManager::TextureManager(){}
TextureManager::TextureManager(const TextureManager&){}

TextureManager* TextureManager::getInstance(){
    if(P_SHARED_INSTANCE == NULL){
        P_SHARED_INSTANCE = new TextureManager();
    }

    return P_SHARED_INSTANCE;
}