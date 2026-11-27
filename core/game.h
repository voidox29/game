#pragma once

#include <SFML/Graphics.hpp>

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


