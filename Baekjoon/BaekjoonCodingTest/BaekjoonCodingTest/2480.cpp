#include <iostream>

using namespace std;

int max(int x, int y)
{
    return ((x > y) ? x : y);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c)
        cout << 10000 + a * 1000;
    else if (a == b)
        cout << 1000 + a * 100;
    else if (c == a)
        cout << 1000 + a * 100;
    else if (b == c)
        cout << 1000 + b * 100;
    else
        cout << max(max(a, b), c) * 100;

    return 0;
}