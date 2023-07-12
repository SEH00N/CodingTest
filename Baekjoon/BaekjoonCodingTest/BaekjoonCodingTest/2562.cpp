#include <iostream>

using namespace std;

int main()
{
    int index, max, numbers[9];

    for (int i = 0; i < 9; i++)
        cin >> numbers[i];

    max = numbers[0];
    index = 0;

    for (int i = 0; i < 9; i++)
        if (numbers[i] > max)
        {
            max = numbers[i];
            index = i;
        }

    cout << max << '\n' << index + 1;

    return 0;
}