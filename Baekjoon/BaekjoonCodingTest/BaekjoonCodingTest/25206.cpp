#include <iostream>
#include <unordered_map>

int main()
{
	std::unordered_map<std::string, float> ratingTable = {
		{"A+", 4.5f},
		{"A0", 4.0f},
		{"B+", 3.5f},
		{"B0", 3.0f},
		{"C+", 2.5f},
		{"C0", 2.0f},
		{"D+", 1.5f},
		{"D0", 1.0f},
		{"F" , 0.0f},
	};

	std::string subject, grade;
	float mark, answer = 0, markSum = 0;

	for (int i = 0; i < 20; ++i)
	{
		std::cin >> subject >> mark >> grade;
		if (grade == "P")
			continue;

		markSum += mark;
		answer += mark * ratingTable[grade];
	}

	std::cout << answer / markSum;

	return 0;
}