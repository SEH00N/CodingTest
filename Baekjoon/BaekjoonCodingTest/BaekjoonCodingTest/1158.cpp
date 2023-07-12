#include <iostream>
#include <list>

int main()
{
	std::ios::sync_with_stdio(NULL);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, k;
	std::cin >> n >> k;

	std::list<int> circleList;
	for (int i = 1; i <= n; ++i)
		circleList.push_back(i);

	std::list<int>::iterator target = circleList.begin();

	std::cout << '<';

	while (n > 0)
	{
		for (int i = 1; i < k; ++i)
		{
			target++;
			if (target == circleList.end())
				target = circleList.begin();
		}
		if (n == 1)
		{
			std::cout << *target;
			break;
		}

		std::cout << *target << ", ";
		--n;
		target = circleList.erase(target);

		if (target == circleList.end())
			target = circleList.begin();
	}

	std::cout << '>';

	return 0;
}