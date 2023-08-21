#include <iostream>

int main()
{
	int count, number, answer = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> number;

		if (number == 1)
			continue;

		++answer;

		for (int j = 2; j <= number / 2; ++j)
		{
			if (number % j == 0)
			{
				--answer;
				break;
			}
		}
	}

	std::cout << answer;

	return 0;
}