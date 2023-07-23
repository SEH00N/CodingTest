#include <iostream>
#include <unordered_set>

int main()
{
	int count;
	std::cin >> count;

	std::unordered_set<char> set;
	std::string word;
	int answer = 0;

	for (int i = 0; i < count; ++i)
	{
		set.clear();
		++answer;

		std::cin >> word;
		for (int j = 0; j < word.length(); ++j)
		{
			if (set.find(word[j]) != set.end())
			{
				--answer;
				break;
			}

			set.insert(word[j]);
			char prefix = word[j];
			while (j < word.length() - 1 && prefix == word[j + 1])
				++j;
		}
	}

	std::cout << answer;

	return 0;
}