#include <iostream>

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

void factorization(int n)
{
	if (isPrime(n))
	{
		std::cout << n << '\n';
		return;
	}

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			factorization(i);
			factorization(n / i);
			break;
		}
	}
}

int main()
{
	int num = 72;
	std::cin >> num;

	if (num != 1)
		factorization(num);

	return 0;
}