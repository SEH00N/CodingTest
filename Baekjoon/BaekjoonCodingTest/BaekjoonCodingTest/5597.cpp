#include <iostream>

using namespace std;

int main()
{
    int input;
    bool arr[30];

    for (int i = 0; i < 30; i++)
        arr[i] = true;

    for (int i = 0; i < 28; i++)
    {
        cin >> input;
        arr[input - 1] = false;
    }

    for (int i = 0; i < 30; i++)
        if (arr[i])
            cout << i + 1 << '\n';

    return 0;
}