#include "numGenerator.h"
#include "takeGuess.h"
#include <chrono>
#include <iostream>
#include <thread>

/* I will return a boolean value to the levelOne function. win - true, loss - false. 
* This will allow player to progress to the next level if all three rounds are won.
*/

bool takeGuess()
{
	int tries{ 0 };  
	int maxTries{ 3 };
	int crrctNum{ numGenerator() };  
	int getGuess{ };

	
	/* Uses do - while and if - else to help the player make a better guess
	within a limited amount of tries. */
	do								
	{
			tries++; 
			std::cin >> getGuess;
			bool didWin;

			if (getGuess == crrctNum)   
			{
				//build anticipation
				std::this_thread::sleep_for(std::chrono::seconds(1)); 
				std::cout << "Narrator:\n"
						  << "**the Devil thinks**\n";

				std::this_thread::sleep_for(std::chrono::seconds(1));
				//reply
				std::cout << "Mr.Lucifer:\n"
						  << "Seems the Big Man upstairs is in your corner. "
						  << "Fantastic guess <player name and gender>!\n";
						  std::this_thread::sleep_for(std::chrono::seconds(3));
				return didWin = true;
			}
			else if (getGuess < crrctNum && tries < maxTries) 
			{
				//build anticipation
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << "Narrator:\n"
						  << "**the Devil thinks**\n";

				//reply
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << "Mr.Lucifer:\n"
						  << "Nice try, but you're too low...GUESS AGAIN! \n";
			}

			else if (getGuess > crrctNum && tries < maxTries) 
			{
				//build anticipation
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << "Narrator:\n"
						  << "**the Devil thinks**\n";

				//reply
				std::this_thread::sleep_for(std::chrono::seconds(1)); 
				std::cout << "Mr.Lucifer:\n"
						  << "Ooo..too high. Try again! \n";
			}
			else if(tries == maxTries) 
			{
				//build anticipation
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << "Narrator:\n"
						  << "**the Devil thinks**\n";

				//reply
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << "Mr.Lucifer:\n"
						  << "Looks like you're out of chances... \n";
						  std::this_thread::sleep_for(std::chrono::seconds(3));
				return didWin = false;
			}
	} while (tries < maxTries);  
}
	

