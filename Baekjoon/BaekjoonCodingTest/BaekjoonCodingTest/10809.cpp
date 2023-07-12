#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alphabets[26] = { -1, };
	string str;
	cin >> str;

	for (int i = 0; i < 26; i++)
		alphabets[i] = -1;

	for (int i = 0; i < str.length(); i++)
		if (alphabets[str[i] - 97] == -1)
			alphabets[str[i] - 97] = i;

	for (int i = 0; i < 26; i++)
		cout << alphabets[i] << ' ';

	return 0;
}