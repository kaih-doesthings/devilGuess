#include <iostream>
#include <string>

std::string playExit()  //define playExit and return the player value
{
	std::cout << "Would you like to play a game? \n";


	std::string getYN;
	std::cin >> getYN;

	return getYN;
}