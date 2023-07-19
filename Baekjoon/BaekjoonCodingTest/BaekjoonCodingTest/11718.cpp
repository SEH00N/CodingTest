#include <iostream>
#include <string>

int main()
{
	std::string input;
	
	while (std::cin.eof() == false)
	{
		std::getline(std::cin, input);
		std::cout << input << '\n';
	}

	return 0;
}