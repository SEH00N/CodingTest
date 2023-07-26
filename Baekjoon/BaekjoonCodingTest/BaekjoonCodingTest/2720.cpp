#include <iostream>

int main()
{
	int count, change, q, d, n, p;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> change;

		q = change / 25;
		change %= 25;

		d = change / 10;
		change %= 10;

		n = change / 5;
		change %= 5;

		p = change;
	
		std::cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';
	}

	return 0;
}