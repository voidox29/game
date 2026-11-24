#ifndef SS_HEADER_SNAKE_H_
#define SS_HEADER_SNAKE_H_

#include <SFML/Graphics.hpp>
#include <list>
#include <random>

#include "food.h"

#define SNAKE_MAX_LENGTH 2000

namespace game {

	class Random
	{
		/* a utility class that will generate random numbers */
		std::random_device rd;
		std::mt19937 gen;

		public:
		Random() gen(rd());

		int getRandomNum(int low, int up)
		{
			std::uniform_int_distribtion<> distrib(low, up}
			return distrib(gen);
		
	};



