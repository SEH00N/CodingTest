#include <iostream>

using namespace std;

int main()
{
    int n, x, temp;
    cin >> n >> x;

    int* numbers = new int[n];

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    for (int i = 0; i < n; i++)
        if (numbers[i] < x)
            cout << numbers[i] << ' ';

    return 0;
}