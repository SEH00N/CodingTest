#include <iostream>
#include <algorithm>

int main()
{
	int num, radix;
	std::string answer;
	std::cin >> num >> radix;

	while (num >= radix)
	{
		//std::cout << num << std::endl;

		int remain = num % radix;
		if (remain > 9)
			answer += (char)(remain - 10 + 'A');
		else
			answer += (char)(remain + '0');

		num /= radix;
	}

	if (num > 9)
		answer += (char)(num - 10 + 'A');
	else
		answer += (char)(num + '0');

	std::reverse(answer.begin(), answer.end());
	std::cout << answer;

	return 0;
}