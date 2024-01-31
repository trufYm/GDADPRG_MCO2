#pragma once

namespace managers{
    class TextureManager{
        public:
            void test();

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