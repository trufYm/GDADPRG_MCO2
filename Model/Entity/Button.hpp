#pragma once

#include "../GameObject.hpp"
#include "../AnimatedTexture.hpp"
#include "../Enum/AssetType.hpp"
#include "../Component/Renderer/Renderer.hpp"
#include "../Component/Input/ButtonInput.hpp"
#include "../Component/Script/ButtonAction.hpp"

namespace entities {
    using namespace models;
    using namespace components;
    class Button : public GameObject {
        private:
            AssetType ETag;

        public:
            Button(std::string strName, AnimatedTexture* pTexture, AssetType ETag);
        
        public:
            void initialize();
    };
}