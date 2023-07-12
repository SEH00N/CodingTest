#include <iostream>

using namespace std;

int main()
{
    int n;
    double result;

    cin >> n;
    result = (n + 1) * n * 0.5;

    cout.precision(20);
    if (n == 1)
        cout << 1;
    else
        cout << result;

    return 0;
}