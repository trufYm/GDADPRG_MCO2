#pragma once

#include "../../Model/Enum/AssetType.hpp"
#include <iostream>
#include <unordered_map>
#include <vector>
#include <SFML/Graphics.hpp>

namespace managers{
    class TextureManager{
        private:
            std::unordered_map<AssetType, std::vector<sf::Texture*>> mapTexture;

        public:
            void clearAll();
            void loadMainMenu();
            void loadGame();
            void loadDayStart();
            void loadEvaluation();
            void loadShip();
            void loadLevel();
            void loadLeaderboard();

            std::vector<sf::Texture*> getTexture(AssetType EKey);
            sf::Texture* getTextureAt(AssetType EKey, int nFrame);
        
        /* SINGLETON CODE */
        private:
            static TextureManager* P_SHARED_INSTANCE;

        private:
            TextureManager();
            TextureManager(TextureManager const&);
            TextureManager& operator = (const TextureManager&);

        public:
            static TextureManager* getInstance();
    };
}