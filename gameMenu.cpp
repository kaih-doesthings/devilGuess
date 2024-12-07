/* Known Issue:
* > Code breaks in the confirmation screen when a non-numerical value (string)
* is entered by the player.
*/
#include "gameMenu.h"
#include <iostream>
#include <string>

//make sure the player wants to leave the game.
void confirmExit()
{
	int exitYes{};

	std::cout << "Are you sure you want to leave? "
		<< "('1' for yes or '2' for no.) \n";
	std::cin >> exitYes;

	//player can go back if they didn't mean to leave.
	switch (exitYes)
	{
	case 1:
		exit(1);
	default:
		if (exitYes == 2)
		{
			break;
		}
		else
		{
			std::cout << "Please select and option. \n";
			confirmExit();
		}
	}
}

//give the player option to continue to play or leave.
void gameMenu()
{
	int yes{ 1 };
	int no{ 2 };

	std::cout << "Play Game? (type '1'.) \n";
	std::cout << "Exit Game? (type '2'.) \n";

	int menuYn{ };
	std::cin >> menuYn;

	//player can go back if they didn't mean to leave.
	switch (menuYn)
	{
	case 1:
		//pick up where we left off in prior function.
		break;
	case 2:
		confirmExit();
	default:
		std::cout << "Please select an option. \n";
		gameMenu();
	}


}