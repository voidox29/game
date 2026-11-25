#ifndef SS_HEADER_FOOD_H_
#define SS_HEADER_FOOD_H_

#include "engine.h"

#include <SFML/Graphics.hpp>
#include <iostream>
/* removed random library from this file */
namespace game {

	class Food {
		public:
			Food(sf::RenderWindow *, sf::Vector2f loc); //where it is drawn and appears on the screen
			sf::RectangleShape getFood(); //from the sfml third-party library use the function RectangleShape and make a function getFood() 
			void drawFood(); //renders the food on the game screen

		private: //this can only be accessed by the class Food
			sf::Color color;//defining color of food
			sf::Vector2f location;//defining location of food
			sf::RectangleShape food; //defining the shape of food
			sf::RenderWindow *screen; //defining where to appear on screen
	};
}
#endif
