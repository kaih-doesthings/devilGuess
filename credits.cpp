#include "credits.h"
#include <chrono>
#include <iostream>
#include <thread>

void credits()
{
	std::cout << "\n---------------------\n\n"
		<< "Game created by KaiH-DoesThings. Thanks for playing!"
		<< "\n\n---------------------\n\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
}