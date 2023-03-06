#include <iostream>

using namespace std;

int pow(int x, int exponent)
{
    if (exponent == 0)
        return 1;
    else if (exponent == 1)
        return x;

    for (int i = 0; i < exponent - 1; i++)
        x *= x;

    return x;
}

int main()
{
    int x, y;
    int result;
    int originX;
    int calcNum = 0;

    cin >> x >> y;

    originX = x;
    result = x * y;

    while (y > 0)
    {
        int i = y % 10;
        int loopCnt = 0;

        while (x > 0)
        {
            int j = x % 10;

            calcNum += i * j * pow(10, loopCnt);

            x *= 0.1;
            loopCnt++;
        }

        cout << calcNum << endl;

        loopCnt = 0;
        calcNum = 0;
        y *= 0.1;
        x = originX;
    }

    cout << result;

	return 0;
}