#include <iostream>

int main()
{
	int count, score, benchmark = -1;
	float average = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> score;
		if (score > benchmark)
			benchmark = score;

		average += score;
	}

	average = average / count / benchmark * 100.0f;
	std::cout << average;

	return 0;
}