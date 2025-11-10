#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	/* Write a program that produces a bar chart for the population growth of a town. The data is stored in
	intervals over the past several years, with the population for that year (rounded to the nearest 1,000
	people) in each line of the file. A test data file called People.txt has been provided on Canvas that
	contains the population numbers for several years. For this data set, the starting year is 1900 and
	the interval between data points is 20.

	The program should ask for the name of the data file and the name of the town. The program should
	open the file and verify that it has opened with no errors. Then the program should read the
	population figure, calculate the year, and display the year and population on a bar chart. For each
	year, it should display the year and a bar consisting of one asterisk for each 1,000 people. */

	/* Here is an example of how the chart might begin:

	My Town Population Growth
	(each * represents 1,000 people)
	1900 **
	1920 ****
	1940 *****
	*/
	using namespace std;
    std::string filename;
    std::string townName;
    std::ifstream inputFile;
    int population;
    int currentYear = 1900;
    const int interval = 20;
//Get the user inputs for file and town
    std::cout << "Enter the name of the data file: ";
    std::getline(std::cin, filename);
    std::cout << "Enter the name of the town: ";
    std::getline(std::cin, townName);
//Open and verify
    inputFile.open(filename);
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
//Display chart
    std::cout << "\n" << townName << " POPULATION GROWTH" << std::endl;
    std::cout << "(each * represents 1,000 people)" << std::endl;
    while (inputFile >> population) {
        std::cout << currentYear << " ";
        for (int i = 0; i < population / 1000; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
        currentYear += interval;
    }

    inputFile.close();

    return 0;
}