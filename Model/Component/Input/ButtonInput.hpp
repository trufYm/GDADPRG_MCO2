#pragma once

#include "../GeneralInput.hpp"

namespace components {
    class ButtonInput : public GeneralInput {
        private:
            bool bInteracted;

        public:
            ButtonInput(std::string strName);
        
        public:
            void perform();

        private:
            void processMouseInput(sf::Event CEvent, bool isPressed);
        
        public:
            bool getInteract();



    };
}
