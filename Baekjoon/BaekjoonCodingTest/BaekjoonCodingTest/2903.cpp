#include <iostream>

int main()
{
	int num, row = 3;
	std::cin >> num;

	for (int i = 0; i < num - 1; ++i)
		row += row - 1;

	std::cout << row * row;

	return 0;
}