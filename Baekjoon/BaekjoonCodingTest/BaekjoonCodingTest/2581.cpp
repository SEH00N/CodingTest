#include <iostream>

int main()
{
	int m, n, min, answer = 0;

	std::cin >> m >> n;

	if (m <= 1)
		m = 2;

	for (int i = m; i <= n; ++i)
	{
		bool isPrime = true;
		
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			answer += i;

			if (answer == i)
				min = answer;
		}
	}

	if (answer == 0)
		std::cout << -1;
	else
	{
		std::cout << answer << '\n';
		std::cout << min;
	}

	return 0;
}