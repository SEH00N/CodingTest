#include <iostream>
#include <cmath>

int main()
{
	int count;
	float x1, x2, y1, y2, r1, r2;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		float distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));

		if (distance == 0)
		{
			if (r1 == r2) // 원이 일치하는 경우
				std::cout << "-1\n";
			else // 한 원이 다른 원 안에 있는 경우 (원의 좌표가 같을 때)
				std::cout << "0\n";
		}
		else
		{
			if (r1 + r2 == distance || std::abs(r1 - r2) == distance) // 외접 또는 내접하여 한 점에서 만나는 경우
				std::cout << "1\n";
			else if (std::abs(r1 - r2) < distance && distance < r1 + r2) // 원이 두 점에서 만나는 경우
				std::cout << "2\n";
			else // 원이 만나는 않는 경우
				std::cout << "0\n";
		}

		//if (distance == 0 && r1 == r2)
			//std::cout << "-1\n";
		//else if (r1 + r2 < distance || std::abs(r1 - r2) > distance || distance == 0)
			//std::cout << "0\n";
		//else if (r1 + r2 == distance || std::abs(r1 - r2) == distance)
			//std::cout << "1\n";
		//else if ((std::abs(r1 - r2) < distance && distance < r1 + r2))
			//std::cout << "2\n";
	}

	return 0;
}
