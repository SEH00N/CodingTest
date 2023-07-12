#include <iostream>

using namespace std;

int main()
{
    int inputCnt, target, cnt = 0;

    cin >> inputCnt;

    int* numbers = new int[inputCnt];

    for (int i = 0; i < inputCnt; i++)
        cin >> numbers[i];

    cin >> target;

    for (int i = 0; i < inputCnt; i++)
        if (numbers[i] == target)
            cnt++;

    cout << cnt;

    return 0;
}