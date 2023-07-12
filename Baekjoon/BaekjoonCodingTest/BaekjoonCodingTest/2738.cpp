#include <iostream>

using namespace std;

int main()
{
    int y, x, temp;
    int* arr;
    cin >> y >> x;

    arr = new int[y * x];

    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            cin >> arr[i * x + j];
        }
    }

    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            cin >> temp;
            cout << arr[i * x + j] + temp << ' ';
        }
        cout << '\n';
    }

    return 0;
}