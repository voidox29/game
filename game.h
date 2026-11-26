#ifndef GAME_H
#define GAME_H

#include "food.h"
#include "snake.h"

#include <SFML/Graphics.hpp>
#include <random>
#include <list>

#define BOX_SIZE 20 

namespace game {

/* central interface that will monitor the movement, collision and when to play sound */

	const std::string MenuStrings[5] = {"Game OVER!" "Do you wish to continue?", "Yes", "No", "Excit"}; 

	enum Fonts {

	};

	/* ---------------------------- THE MAIN GAME CONTROLLER ---------------- */

	class GameController {
		public:
			/* Constructors */
			GameController(sf::RenderWindow *w);

			void start();
			sf::Font *getFont(Fonts font);

		private:
			void game Loop();
			void setupScene();
			void gameOver();
			void loadResources();

			Snake snake;
			sf::RenderWindow *screen;
			float scale;
			int score;

			sf::Font fontList[3];

	};
}

#endif

