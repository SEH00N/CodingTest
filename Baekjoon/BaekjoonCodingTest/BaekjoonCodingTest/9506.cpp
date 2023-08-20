#include <iostream>
#include <set>

int main()
{
	std::set<int> divisors;
	int number, sum = 0;;
	
	while (true)
	{
		sum = 0;
		divisors.clear();
		std::cin >> number;
		if (number == -1)
			return 0;

		for (int i = 1; i < number / 2; ++i)
		{
			if (number % i == 0)
			{
				if (divisors.find(number / i) == divisors.end() && number / i != number)
				{
					sum += number / i;
					divisors.insert(number / i);
				}

				if (divisors.find(i) == divisors.end())
				{
					sum += i;
					divisors.insert(i);
				}
			}
		}

		if (sum == number)
		{
			auto iter = divisors.begin();
			std::cout << number << " = " << *iter++;
			for (iter; iter != divisors.end(); ++iter)
				std::cout << " + " << *iter;
		} 
		else
			std::cout << number << " is NOT perfect.";


		std::cout << '\n';
	}

	return 0;
}