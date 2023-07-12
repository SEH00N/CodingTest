#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int count, question;
	std::unordered_map<std::string, int> dictionary;
	std::vector <std::string> dictionary2;
	std::string pokemon;
	std::cin >> count >> question;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> pokemon;
		dictionary.insert(std::make_pair(pokemon, i + 1));
		dictionary2.push_back(pokemon);
	}

	for (int i = 0; i < question; ++i)
	{
		std::cin >> pokemon;

		if (dictionary.find(pokemon) != dictionary.end())
			std::cout << dictionary[pokemon] << '\n';
		else
			std::cout << dictionary2[std::stoi(pokemon) - 1] << '\n';
	}

	return 0;
}