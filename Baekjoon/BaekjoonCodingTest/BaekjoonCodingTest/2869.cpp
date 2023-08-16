#include <iostream>
#include <math.h>

int main()
{
	long pwr, slide, destination;
	std::cin >> pwr >> slide >> destination;

	std::cout << (long)std::ceil((destination - slide) / (long double)(pwr - slide));

	return 0;
}