#include <iostream>

int main()
{
	int a, b;

	while (true)
	{
		std::cin >> a >> b;
		// a > b possibility for multiple
		// a < b possibility for neither

		if (a == 0 && b == 0)
			break;

		if (a > b)
		{
			if (a % b == 0)
			{
				std::cout << "multiple";
				continue;
			}
		}
		else
		{
			if (b % a == 0)
			{
				std::cout << "factor";
				continue;
			}
		}

		std::cout << "neither";
	}

	return 0;
}