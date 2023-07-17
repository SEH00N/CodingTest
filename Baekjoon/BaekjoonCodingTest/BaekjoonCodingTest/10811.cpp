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
		for (int j = left - 1; j < right; ++j)
		{
			int temp = baskets[j];
			baskets[j] = baskets[right - j - 1];
			baskets[right - j - 1] = temp;
		}
	}

	for (int i = 0; i < basketCount; ++i)
		std::cout << baskets[i] << ' ';

	return 0;
}