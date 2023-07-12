#include <iostream>

using namespace std;

int main()
{
	char arr2[5][16];

	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 16; ++j)
			arr2[i][j] = '\0';

	for (int i = 0; i < 5; ++i)
		cin >> arr2[i];

	for (int i = 0; i < 15; ++i)
		for (int j = 0; j < 5; ++j)
			if (arr2[j][i] != '\0')
				cout << arr2[j][i];
	return 0;
}