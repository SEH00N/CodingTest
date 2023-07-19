#include <iostream>
#include <string>

int MyS2I(const std::string& str)
{
	std::string input = str;

	char temp = input[0];
	input[0] = input[2];
	input[2] = temp;

	return std::stoi(input);
}

int main()
{
	std::string input;
	int prev, next;

	std::cin >> input;
	prev = MyS2I(input);

	std::cin >> input;
	next = MyS2I(input);

	std::cout << ((prev > next) ? prev : next);

	return 0;
}