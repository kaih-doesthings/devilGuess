#include <iostream>
#include <string>


/*
* > For this we will introduce a do-while loop. Do (say the rules) 
* and confirm understanding, while player does not understand. 
* > Need to add functionality for yes and no variants (eventually).
*/ 
void gameRules()
{
	std::string confirm{ "" };
	do
	{
		//std::cout << "These are the rules. Do you understand? \n";
		std::cout << "Mr. Lucifer:\n 'The rules are very simple <player name and gender>; "
				  << "I pick a single card from a shuffled deck and you have 3 chances "
				  << "to guess the correct card number. If you guess correctly in under 3 "
				  << "tries then I'll let you go, but...'\n*the Devil smiles menacingly*\n"
				  << "'If you exhaust your efforts before guessing correctly..."
				  << "YOUR SOUL IS MINE! So, what do you say? Clear enough for you?'\n";
		std::cin >> confirm;

		if (confirm == "yes")
		{
			std::cout << "Excellent! \n";
			break;
		}
		else if (confirm == "no")
		{
			std::cout << "I'll tell you one more time: ";
		}
		else if (confirm != "yes" || "no")
		{
			std::cout << "Please answer with 'yes' or 'no'. \n";
		};

		
	} while (confirm != "yes" );
}

