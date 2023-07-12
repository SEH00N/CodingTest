#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios_base::sync_with_stdio();

	std::string str, bomb, answer;
	std::cin >> str >> bomb;

	int bombLen = bomb.length();

	for (int i = 0; i < str.length(); ++i)
	{
		answer += str[i];
		if (str[i] == bomb.back() && i - bombLen >= -1)
		{
			std::string compare = "";
			for (int j = answer.length() - bombLen; j < answer.length(); ++j)
				compare += answer[j];

			if (compare == bomb)
				answer.erase(answer.length() - bombLen);
		}
	}

	std::cout << ((answer.length() > 0) ? answer : "FRULA");

	return 0;
}