#include <iostream>

int main()
{
	int count, length;
	std::cin >> count;

	length = count * 2 - 1;

	for (int i = 0; i < count * 2 - 1; ++i)
	{
		if (i < count)
		{
			for (int j = 0; j < count - i - 1; ++j)
				std::cout << ' ';
			for (int j = 0; j < i * 2 + 1; ++j)
				std::cout << '*';
		}
		else
		{
			for (int j = 0; j < i - count + 1; ++j)
				std::cout << ' ';
			for (int j = 0; j < (length - i) * 2 - 1; ++j)
				std::cout << '*';
		}

		std::cout << '\n';
	}

	return 0;
}