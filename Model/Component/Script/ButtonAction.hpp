#pragma once

#include "../../../Controller/Manager/SceneManager.hpp"
#include "../../Enum/ComponentType.hpp"
#include "../../Enum/SceneTag.hpp"
#include "../../Enum/AssetType.hpp"
#include "../Component.hpp"
#include "../Input/ButtonInput.hpp"

namespace components {
    using namespace managers;

    class ButtonAction : public Component {
        private:
            AssetType ETag;
            sf::RenderWindow* pWindow;
            
        public:
            ButtonAction(std::string strName, AssetType ETag);
            ButtonAction(std::string strName, AssetType ETag, sf::RenderWindow* pWindow);

        public:
            void perform();
    };
}
