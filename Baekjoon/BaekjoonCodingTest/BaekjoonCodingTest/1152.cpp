#include <iostream>
#include <sstream>

int main()
{
	int count = 0;
	std::string input, temp;
	std::getline(std::cin, input);

	std::stringstream sstream(input);

	while (sstream >> temp)
		++count;

	std::cout << count;

	return 0;
}