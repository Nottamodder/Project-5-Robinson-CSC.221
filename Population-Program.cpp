#include <iostream>
#include <cstdlib>
#include<iomanip>

int main()
{
	/* Write a program that will predict the size of a population of organisms. The program should
	ask the user for the starting number of organisms, their average daily population increase
	(as a percentage), and the number of days they will multiply. A loop should display the size
	of the population for each day. */
	/* Input Validation : Do not accept a number less than 2 for the starting size of the population.
	Do not accept a negative number for average daily population increase. Do not accept a
	number less than 1 for the number of days they will multiply. */
	float startOrganism, dailyPercent, dailyMultiple;
	std::cout << "Enter your number of organisms to start \n";
	std::cin >> startOrganism;
	if (startOrganism < 2) {
		std::cout << "Please enter a population of 2 or greater\n";
		exit(EXIT_FAILURE);
	}
	else std::cout << "Population accepted\n";
	std::cout << "Enter the average daily population increase (percentage) \n";
	std::cin >> dailyPercent;
	if (dailyPercent < 0) {
		std::cout << "Please enter a percent that is a positive number\n";
		exit(EXIT_FAILURE);
	}
	else std::cout << "Percentage accepted\n";
	std::cout << "Enter the number of days the organisms multiply \n";
	std::cin >> dailyMultiple;
	if (dailyMultiple < 1) {
		std::cout << "Please enter a multiple of 1 or greater\n";
		exit(EXIT_FAILURE);
	}
	else std::cout << "Multiple accepted\n";
	//calculate and display based on instructions
	// population = day * percentage * start
	float dayPopulation, currentPopulation = startOrganism;
	for (int i = 1; i <= dailyMultiple; ++i) {
		currentPopulation = (1 + (dailyPercent / 100)) * currentPopulation;
		std::cout << "The population of the organism on day " << i << " is " << std::setprecision(5) << currentPopulation << std::endl;
	}
}