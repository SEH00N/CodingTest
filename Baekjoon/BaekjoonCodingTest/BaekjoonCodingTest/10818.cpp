#include <iostream>

using namespace std;

int main()
{
    int cnt, temp, max, min;
    cin >> cnt;

    cin >> max;
    min = max;

    for (int i = 0; i < cnt - 1; i++)
    {
        cin >> temp;

        if (temp < min)
            min = temp;
        if (temp > max)
            max = temp;
    }

    cout << min << ' ' << max;

    return 0;
}