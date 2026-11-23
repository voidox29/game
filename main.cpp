#include "ui/MainMenu.h"

int main() 
{
	sf::RenderWindow window(sf::VideoMode({800, 800}), "Snake" , sf::Style::Close);
	game::Mainmenu menu(window);
	menu.start();
	return 0;
}

