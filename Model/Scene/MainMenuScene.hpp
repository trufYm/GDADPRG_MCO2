#pragma once

#include "../Scene.hpp"
#include "../Enum/SceneTag.hpp"
#include "../Enum/AssetType.hpp"
#include "../AnimatedTexture.hpp"
#include "../Entity/Background.hpp"
#include "../Entity/Player.hpp"
#include "../../Controller/Manager/TextureManager.hpp"

namespace scenes {
    using namespace managers;
    using namespace models;
    using namespace entities;
    class MainMenuScene : public Scene {
        private:
            sf::RenderWindow* pWindow;

        public:
            MainMenuScene(sf::RenderWindow* pWindow);

        public:
            void onLoadResources();
            void onLoadObjects();
            void onUnloadResources();
        
        private:
            void createBackground();
            void createButtons();
    };
}
