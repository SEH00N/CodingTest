#include <iostream>

int main()
{
	int usage[26] = {0};
	std::string str;
	std::cin >> str;


	for (int i = 0; i < str.length(); ++i)
		++usage[std::tolower(str[i]) - 'a'];

	int highest = 0;
	bool duplicated = false;

	for (int i = 1; i < 26; ++i)
	{

		if (usage[i] > usage[highest])
		{
			highest = i;
			duplicated = false;
		}
		else if (usage[i] == usage[highest])
			duplicated = true;
	}

	std::cout << (duplicated ? '?' : (char)('A' + highest));

	return 0;
}