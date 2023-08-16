#include <iostream>
#include <algorithm>

/// <summary>
/// returns inner boundary
/// </summary>
bool LimitBoundary(int* x, int* y)
{
	int result = *x >= 0 && *y >= 0;

	*x = std::max(0, *x);
	*y = std::max(0, *y);

	return result;
}

int main()
{
	int destination, step = 0, x = 0, y = 0;
	bool upperFlag = false;
	// upper -> inc(x), dec(y)
	// lower -> dec(x), inc(y)

	std::cin >> destination;

	while (true)
	{
		step++;
		if (step == destination)
			break;

		// move x, y
		x += upperFlag ? 1 : -1;
		y += upperFlag ? -1 : 1;

		if (LimitBoundary(&x, &y) == false)
			upperFlag = !upperFlag;
	}

	std::cout << x + 1 << '/' << y + 1 << '\n';

	return 0;
}