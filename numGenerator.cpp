//#include <random>
#include <cstdlib>
#include <ctime>



int numGenerator()						//doing it this way should keep the number from changing every time we need user input
{
	srand(time(0));
	int randomNum = rand() % 10 + 1;

	return randomNum;
}


/*int numGenerator()
{
	//create random number generator engine
	std::random_device ranDev;  //Non-deterministic seed
	std::mt19937 gen(ranDev()); //mersenne twister engine

	std::uniform_int_distribution<int> dis(1, 10); //generate number between 1 and 10
	int randomNum = dis(gen);

	return randomNum;

}*/