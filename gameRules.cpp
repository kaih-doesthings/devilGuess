/*
* > For this we will introduce a do-while loop. Do (say the rules) 
* and confirm understanding, while player does not understand. 
* > Need to add functionality for yes and no variants (eventually).
* > Note: Dialogue will eventually be contained in it's own text file.
*/ 
#include <iostream>
#include <string>


void gameRules()
{

	std::string confirm{ "" }; 
	do
	{
		std::cout << "Mr.Lucifer:\n "
				  << "'The rules are simple <player name and gender>; "
				  << "I pick a single card from a shuffled deck and you have 3 chances "
				  << "to guess the correct number. If you guess correctly in 3 "
				  << "tries then I'll let you go, but...'"
				  << "\n------------------------\n"
				  << "Narrator:\n"
				  << "\n*the Devil smiles menacingly*\n"
				  << "\n------------------------\n"
				  << "Mr.Lucifer:\n"
				  << "'If you exhaust your efforts before guessing correctly..."
				  << "YOUR SOUL IS MINE! So, what do you say? The terms clear enough for you?'\n\n";

		std::cin >> confirm; 

		if (confirm == "yes") 
		{
			std::cout << "\nMr.Lucifer:"
					  << "\nExcellent! Let's begin...\n";
			break;
		}
		else if (confirm == "no") 
		{
			std::cout << "\nMr.Lucifer:"
					  << "\nI'll tell you one more time:\n";
		}
		else if (confirm != "yes" || "no") 
		{
			std::cout << "\nMr.Lucifer:"
					  << "\nREPLY WITH 'YES' OR 'NO' OR YOUR SOUL IS FORFEIT! \n\n";
		};

		
	} while (confirm != "yes" );
}

