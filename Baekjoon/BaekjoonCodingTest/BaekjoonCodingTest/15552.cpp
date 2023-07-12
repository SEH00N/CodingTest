#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt, a, b;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}