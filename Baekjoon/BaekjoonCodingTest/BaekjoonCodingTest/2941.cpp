#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;

	int count = 0;

	for (int i = str.length() - 1; i > -1; --i)
	{
		++count;
		
		if (str[i] == '=' || str[i] == '-')
		{
			--i;

			if (i > 0 && str[i] == 'z' && str[i - 1] == 'd')
				--i;
		}
		else if (i > 0 && str[i] == 'j')
			if (str[i - 1] == 'l' || str[i - 1] == 'n')
				--i;
	}

	std::cout << count;

	return 0;
}