#include <iostream>

using namespace std;

int main()
{
    int cnt, a, b;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> a >> b;

        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
    }

    return 0;
}