#include "snake.h"
#include "game.h"


game::Snake::Snake(sf::RenderWindow *w) { //namespace game -> class snake initialize a new snake // game.Snake->Snake(sf::RenderWindow *w)
	colorBody = sf::Color::Pink;
	colorHead = sf::Color::Purple;
	speedSnake = 5; //speed of snake per pizels
	screen= w;

	snake_length = 2;
	int x =
		rand.getRandomInt(screen->getSize().x / 4, screen->getSize().x * 3 / 4);
	int y =
		rand.getRandowInt(screen->getSize().y / 4, screen->getSize().y * 3 / 4);
	{
		body.push_back(getRectangleAt(sf::

		
