#include <iostream>
#include <unordered_map>
#include "SFML/Graphics.hpp"

#include "Controller/Game.cpp"
#include "Controller/Manager/TextureManager.cpp"
#include "Model/GameObject.cpp" //Might be removed? Specs specify a GameObjectManager, maybe GameObject inherits from the manager?

int main() {
   sf::RenderWindow window(sf::VideoMode(200, 200), "SFML Start-Up");
   sf::CircleShape shape(100.f);
   shape.setFillColor(sf::Color::Green);

   controllers::Game();
   managers::TextureManager::getInstance()->test();
   models::GameObject();

   while (window.isOpen()) {
      sf::Event event;
      while (window.pollEvent(event)) {
         if (event.type == sf::Event::Closed)
            window.close();
      }

      window.clear();
      window.draw(shape);
      window.display();
   }

   return 0;
}
