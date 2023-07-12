#include <iostream>

using namespace std;

bool include(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return true;

    return false;
}

int main()
{
    int arr[10], temp, cnt = 0;

    for (int i = 0; i < 10; i++)
        arr[i] = -1;

    for (int i = 0; i < 10; i++)
    {
        cin >> temp;
        temp = temp % 42;

        if (!include(arr, temp, 10))
            cnt++;

        arr[i] = temp;
    }

    cout << cnt;

    return 0;
}