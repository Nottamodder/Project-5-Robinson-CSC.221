#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	/* A teacher has asked all her students to line up according to their first name. For example,
	in one class Amy will be at the front of the line, and Yolanda will be at the end. Write a
	program that reads the student names from the file LineUp.txt that is provided for you on
	the Canvas assignment. The program should read names from the file until there is no
	more data to read. Once all the names have been read, it reports the number of students in
	the class, which student would be at the front of the line, and which one would be at the
	end of the line. You may assume that no two students have the same name. */
	std::ifstream inputFile("LineUp.txt");
	std::vector<std::string> lines;
	std::string line;
	while (std::getline(inputFile, line))
		lines.push_back(line);
	inputFile.close();
	//sort alphabetically
	std::sort(lines.begin(), lines.end());
	//output first, last, and student count
	std::cout << "Number of students: " << lines.size() << std::endl;
	if (!lines.empty()) {
		std::cout << "Front of the line: " << lines.front() << std::endl;
		std::cout << "End of the line: " << lines.back() << std::endl;
	}
}