#include <iostream>
#include <unordered_set>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::unordered_set<int> set;
	int count, num;

	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> num;
		set.insert(num);
	}

	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> num;
		if (set.find(num) != set.end())
			std::cout << "1 ";
		else
			std::cout << "0 ";
	}

	return 0;
}