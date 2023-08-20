#include <iostream>

int main()
{
	int base, destination, step = 0;
	std::cin >> base >> destination;

	//for (int i = 1; i < base / 2; ++i)
	//{
	//	if (base % i == 0)
	//	{
	//		std::cout << i << '\n' << base / i << '\n';
	//	}
	//}

	for (int i = 1; i <= base; ++i)
	{
		if (base % i == 0)
		{
			step++;

			//std::cout << i << '\n';

			if (step == destination)
			{
				std::cout << i;
				return 0;
			}
		}
	}

	std::cout << 0;

	return 0;
}