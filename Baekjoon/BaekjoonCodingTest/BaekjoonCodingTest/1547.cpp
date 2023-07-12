#include <iostream>

void Swap(int* right, int* left)
{
	int temp = *right;
	*right = *left;
	*left = temp;
}

int main()
{
	int count, command1, command2, arr[3] = { 0 };
	std::cin >> count;

	arr[0] = 1;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> command1 >> command2;
		Swap(arr + command1 - 1, arr + command2 - 1);
	}

	for (int i = 0; i < 3; ++i)
	{
		if (arr[i] == 1)
		{
			std::cout << i + 1;
			return 0;
		}
	}

	std::cout << -1;

	return 0;
}