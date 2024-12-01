#include "numGenerator.h"
#include "takeGuess.h"
#include <iostream>

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
				std::cout << "You win! \n";
				return didWin = true;
			}
			else if (getGuess < crrctNum && tries < maxTries) 
			{
				std::cout << "Nice try, but you're too low...guess again! \n";
			}

			else if (getGuess > crrctNum && tries < maxTries) 
			{
				std::cout << "Ooo..too high. Try again! \n";
			}
			else if(tries == maxTries) 
			{
				std::cout << "Looks like you're out of chances... \n";
				return didWin = false;
			}
	} while (tries < maxTries);  
}
	
