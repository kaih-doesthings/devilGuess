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
	//Create the setting
	std::cout << "\n------------------------\n"
		<< "Narrator:\n"
		<< "You are forced into an open elevator by two strong bodyguards. "
		<< "As the door closes they hit the button for a floor labled 'C0'. \n"
		<< "You don't know where you're going or how you got there, "
		<< "but you do know one thing...this place is QUITE toasty! \n"
		<< "You reach floor 'C0' and are welcomed by a cozy red office. "
		<< "The two guards push you into a chair in front of the large desk "
		<< "in the center of the room. There stands a horned, red man looking out "
		<< "of the window to the ground below. He turns around and greets you."
		<< "\n------------------------\n"
		<< "Mr.Lucifer:\n"
		<< "'Ah, another unfortunate soul. Seems you're in a bit of a predicament! "
		<< "Not quite good enough for the Big Man, and yet, not quite AWFUL enough for me.' \n"
		<< "'PURGATORY I believe you humans call it? No matter. The wanderers usually go "
		<< "to me, but I've been getting quite bored with this routine. So I figured, "
		<< "why not make a little game of it? Spice things up, you know?'"
		<< "\n------------------------\n"
		<< "Narrator:\n"
		<< "The devil cracks a devious smirk as you look around nervously."
		<< "\n------------------------\n";

	//function starts here
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

