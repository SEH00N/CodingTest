#include <iostream>
#include <algorithm>

int main()
{
	std::string str, compare;
	std::cin >> str;

	compare = str;
	std::reverse(str.begin(), str.end());

	std::cout << ((compare == str) ? '1' : '0');
}