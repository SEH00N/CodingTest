#include <map>
#include <iostream>

int main()
{
	int count;
	std::map<std::string, int> books;
	std::string book;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> book;
		if (books.find(book) != books.end())
			books[book]++;
		else
			books.insert(std::make_pair(book, 1));
	}

	count = -1;
	for (auto iter = books.begin(); iter != books.end(); iter++)
	{
		if (iter->second > count)
		{
			book = iter->first;
			count = iter->second;
		}
	}

	std::cout << book;

	return 0;
}