#include <vector>
#include <set>
#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::set<std::string> set;
	std::set<std::string> answer;

	int unlisten, unwatch;
	std::string name;

	std::cin >> unlisten >> unwatch;

	for (int i = 0; i < unlisten; ++i)
	{
		std::cin >> name;
		set.insert(name);
	}

	for (int i = 0; i < unwatch; ++i)
	{
		std::cin >> name;
		if (set.find(name) != set.end())
			answer.insert(name);
	}

	std::cout << answer.size() << '\n';
	for (auto iter = answer.begin(); iter != answer.end(); iter++)
		std::cout << *iter << '\n';

	return 0;
}