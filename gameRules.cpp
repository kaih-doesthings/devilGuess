/* For this we will introduce a do-while loop. Do (say the rules) 
* and confirm understanding, while player does not understand. 
* > Need to add functionality for yes and no variants (eventually).
* > Note: Dialogue will eventually be contained in it's own text file.
*/ 
#include <algorithm>
#include <cctype>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>


void gameRules()
{
	//dialogue (will eventually be a text file)
	std::cout << "\nMr.Lucifer:\n "
			  << "The rules are simple <player name and gender>; "
			  << "I pick a single card from a shuffled deck and you have 3 chances "
			  << "to guess the correct number on the card. If you guess correctly in 3 "
			  << "tries then I'll let you go, but...\n";
			  std::this_thread::sleep_for(std::chrono::seconds(15)); 

	std::cout << "\nNarrator:\n"
			  << "**the Devil smiles menacingly**\n";
			  std::this_thread::sleep_for((std::chrono::seconds(2))); 

	std::cout << "\nMr.Lucifer:\n"
			  << "If you exhaust your efforts before guessing correctly..."
			  << "your soul is mine. So, what do you say? The terms clear enough for you?\n\n";
			  std::this_thread::sleep_for((std::chrono::seconds(2)));

	std::cout << "\nNarrator:\n"
			  << "**the Devil awaits your response.** Type your answer below:\n";
			  //No delay as user input acts as a delay.

	std::string confirm{ "" }; 
	do
	{	
		
		std::cin >> confirm;
		//catch call for Y/N variations.
		std::transform(confirm.begin(), confirm.end(), confirm.begin(), tolower);

		if ( confirm == "yes")
		{
			std::cout << "\nMr.Lucifer:\n"
					  << "Excellent! Let's begin...\n";
					  std::this_thread::sleep_for((std::chrono::seconds(2)));   
			break;
		}
		else if (confirm == "no")
		{
			std::cout << "\nMr.Lucifer:\n"
					  << "Let me repeat:I pick a single card from a shuffled deck and you "
					  << "have 3 chances. to guess the correct number on the card. "
					  << "If you guess correctly in 3 tries then I'll let you go, \nbut "
					  << "if you exhaust your efforts before guessing correctly your soul "
					  << "is mine. Understand?\n";
				      std::this_thread::sleep_for((std::chrono::seconds(2)));

			std::cout << "\nNarrator:\n"
					  << "**the Devil awaits your response.** Type your answer below:\n";
		}
		else if (confirm != "yes" || "no")
		{
			std::cout << "\nMr.Lucifer:\n"
					  << "REPLY WITH 'YES' OR 'NO' OR YOUR SOUL IS FORFEIT! \n\n";
				      std::this_thread::sleep_for((std::chrono::seconds(2)));

			std::cout << "\nNarrator:\n"
					  << "**the Devil awaits your response.** Type your answer below:\n";
		};

		
	} while (confirm != "yes" );
}

