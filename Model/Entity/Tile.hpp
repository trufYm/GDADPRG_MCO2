#pragma once

#include "../GameObject.hpp"
#include "../AnimatedTexture.hpp"
#include "../Component/Renderer/Renderer.hpp"

namespace entities{
    using namespace models;
    using namespace components;
    class Tile : public GameObject{
        public:
            Tile(std::string strName, AnimatedTexture* pTexture);

        public:
            void initialize();
            sf::FloatRect getGlobalBounds();

    };
}