#include <iostream>

using namespace std;

int main()
{
    int basketCnt, changeCnt, aBasket, bBasket, temp;
    int* baskets;

    cin >> basketCnt >> changeCnt;
    baskets = new int[basketCnt];

    for (int i = 0; i < basketCnt; i++)
        baskets[i] = i + 1;

    for (int i = 0; i < changeCnt; i++)
    {
        cin >> aBasket >> bBasket;
        temp = baskets[aBasket - 1];
        baskets[aBasket - 1] = baskets[bBasket - 1];
        baskets[bBasket - 1] = temp;
    }

    for (int i = 0; i < basketCnt; i++)
        cout << baskets[i] << ' ';

    return 0;
}