#include <iostream>
#include <unordered_set>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio();

	std::unordered_set<int> set1, set2;
	int count1, count2, num;

	std::cin >> count1 >> count2;

	int answer = count1 + count2;

	for (int i = 0; i < count1; ++i)
	{
		std::cin >> num;
		set1.insert(num);
	}

	for (int i = 0; i < count2; ++i)
	{
		std::cin >> num;
		set2.insert(num);

		if (set1.find(num) != set1.end())
			--answer;
	}

	for (auto iter = set1.begin(); iter != set1.end(); iter++)
	{
		if (set2.find(*iter) != set2.end())
			--answer;
	}

	std::cout << answer;

	return 0;
}