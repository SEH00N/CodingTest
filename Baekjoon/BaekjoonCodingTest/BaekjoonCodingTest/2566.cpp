#include <iostream>

using namespace std;

int main()
{
	int my, mx, temp, max = -1;

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> temp;

			if (temp > max)
			{
				max = temp;
				mx = j;
				my = i;
			}
		}
	}

	cout << max << '\n' << my + 1 << ' ' << mx + 1;

	return 0;
}