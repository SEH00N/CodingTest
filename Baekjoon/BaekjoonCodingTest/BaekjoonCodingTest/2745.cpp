#include <iostream>
#include <cmath>

int main()
{
	int radix, length, answer = 0;
	std::string number;
	std::cin >> number >> radix;

	length = number.length();

	for (int i = 0; i < length; ++i)
	{
		int num;
		if ('A' <= number[i] && number[i] <= 'Z') // 영문일 때
			num = number[i] - 'A' + 10;
		else
			num = number[i] - '0';

		answer += num * std::pow(radix, (length - i - 1));
	}

	std::cout << answer;

	return 0;
}

//#include <unordered_map>
//
//int main()
//{
//	std::unordered_map<char, int> table = {
//		{'0', 0},
//		{'1', 1},
//		{'2', 2},
//		{'3', 3},
//		{'4', 4},
//		{'5', 5},
//		{'6', 6},
//		{'7', 7},
//		{'8', 8},
//		{'9', 9}
//	};
//
//	int radix, length, answer = 0;
//	std::string number;
//	std::cin >> number >> radix;
//
//	length = number.length();
//
//	for (int i = 0; i < length; ++i)
//	{
//		int num;
//		if (table.find(number[i]) == table.end()) // 영문일 때
//			num = number[i] - 'A' + 10;
//		else
//			num = table[number[i]];
//
//		answer += num * std::pow(radix, (length - i - 1));
//	}
//
//	std::cout << answer;
//
//	return 0;
//}