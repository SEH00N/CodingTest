#include <iostream>

int main()
{
	int basketCount, commandCount;
	std::cin >> basketCount >> commandCount;

	int* baskets = new int[basketCount];
	for (int i = 0; i < basketCount; ++i)
		baskets[i] = i + 1;

	int left, right;
	for (int i = 0; i < commandCount; ++i)
	{
		std::cin >> left >> right;
		for (int j = 0; j < (right - left) / 2 + 1; ++j)
		{
			int temp = baskets[left + j - 1];
			baskets[left + j - 1] = baskets[right - j - 1];
			baskets[right - j - 1] = temp;
			std::cout  << "Swap Info : " << baskets[left + j - 1] << ' ' << baskets[right - j - 1] << '\n';
		}
	}

	for (int i = 0; i < basketCount; ++i)
		std::cout << baskets[i] << ' ';

	return 0;
}