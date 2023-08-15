#include <iostream>

int main()
{
	int destination;

	int step = 1;
	int sum = 1;
	std::cin >> destination;

	if (destination == 1)
	{
		std::cout << "1";
		return 0;
	}

	while (true)
	{
		// 1 < 8 && 8 < 1 + (6 * 1)
		// 7 < 8 && 8 < 7 + (6 * 2)
		if (sum <= destination && destination <= sum + (6 * step))
			break;

		sum += step * 6;
		step++;
	}

	std::cout << step + 1 << '\n';
	return 0;
}