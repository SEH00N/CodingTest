#include <iostream>

using namespace std;

int main()
{
    int h, m, t;
    cin >> h >> m >> t;

    m += t;

    if (m >= 60)
    {
        h += m / 60;
        m = m % 60;

        h = h % 24;
    }

    cout << h << " " << m;

    return 0;
}