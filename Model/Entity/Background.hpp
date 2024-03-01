#pragma once

#include "../GameObject.hpp"
#include "../AnimatedTexture.hpp"
#include "../Component/Renderer/Renderer.hpp"

namespace entities {
    using namespace models;
    class Background : public GameObject{
        public:
            Background(std::string strName, AnimatedTexture* pAnimatedTexture);
        /* [TODO] :
           Make [Background] a [GameObject]. */
        
        public:
            void initialize();
    };
}
