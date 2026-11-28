#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include "food.h"
#include "snake.h"

#define BOX_SIZE 20

namespace game {
	const std::string GameMenu[5] = {"Game Over!" , "Do you wish to continue?", "Yes", "No", "Exit"}; 

	enum MenuText {
		GameOver, Continue, Yes, No, Exit,
	};

	enum Fonts {
	};

	class GameController {
		public:
			GameController(RenderWindow *w);

			void start();
			sf::Font *getFont(Fonts font); //yet to define

		private:
			void gameLoop();
			void setupScene();
			void gameOver(); //yet to define
			void loadResources(); //yet to define
					      
					     
			Snake snake;
			sf::RenderWindow *screen;
			float scale;
			int score;

			sf::Font fontList[3];

	};
}





