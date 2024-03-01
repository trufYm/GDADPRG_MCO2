#pragma once

#include "../Model/Entity/Player.hpp"
#include "Manager/TextureManager.hpp"
#include "../Model/Enum/AssetType.hpp"
#include "Manager/GameObjectManager.hpp"
#include "../Model/AnimatedTexture.hpp"
#include "Manager/SceneManager.hpp"
#include "../Model/Entity/Background.hpp"

namespace controllers {
    using namespace entities;
    using namespace managers;
    using namespace models;
    class Game {
        //Fields
        private:
            sf::RenderWindow CWindow;
        
        //Controllers
        public:
            Game();
        
        //Methods
        public:
            void run();
        
        private:
            void processEvents();
            void update(sf::Time tTimePerFrame);
            void render();
    };
}