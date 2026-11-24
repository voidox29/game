#ifndef SS_HEADER_ENGINE_H_
#define SS_HEADER_ENGINE_H_

#include <SFML/Graphics.hpp>

namespace game {

/*  contain functions that will be used to perform certain actions that will be needed by the game */

//checks whether two heads(snake and/or wall) are colliding
bool checkCollision(const sf::RectangleShape &, const sf::RectangleShape &);


//spawns new visual blocks on the screen
sf::RectangleShape getRectangleAt(sf::Vector2f location, sf::Color);

}

#endif
