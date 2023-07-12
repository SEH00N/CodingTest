#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count - i - 1; ++j)
			std::cout << ' ';

		for (int j = 0; j < i * 2 + 1; ++j)
			std::cout << '*';

		std::cout << '\n';
	}

	return 0;
}