#include <iostream>

using namespace std;

int main()
{
    int basketCnt, puttingCnt, startIdx, endIdx, ballNum;
    cin >> basketCnt >> puttingCnt;

    int* baskets = new int[basketCnt];

    for (int i = 0; i < basketCnt; i++)
        baskets[i] = 0;

    for (int i = 0; i < puttingCnt; i++)
    {
        cin >> startIdx >> endIdx >> ballNum;
        for (int j = startIdx; j <= endIdx; j++)
            baskets[j - 1] = ballNum;
    }

    for (int i = 0; i < basketCnt; i++)
        cout << baskets[i] << ' ';

    return 0;
}