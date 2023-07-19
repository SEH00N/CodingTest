#include <iostream>

int main()
{
	int input, requires[] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> input;
		std::cout << requires[i] - input << ' ';
	}

	return 0;
}