#ifndef SS_HEADER_FOOD_H_
#define SS_HEADER_FOOD_H_

#include "engine.h"

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random> //used to generate food at random locations
namespace game {

	class Food {
		public:
			Food(sf::RenderWindow *, sf::Vector2f loc); //where it is drawn and appears on the screen
			sf::RectangleShape getFood();
			void drawFood(); //renders the food on the game screen

		private:
			sf::Color color;
			sf::Vector2f location;
			sf::RectangleShape food;
			sf::RenderWindow *screen;
	};
}
#endif
