#include <iostream>

using namespace std;

int main()
{
    int totalCost, cnt, eachCost, eachCnt, calcedTotal = 0;

    cin >> totalCost >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> eachCost >> eachCnt;
        calcedTotal += eachCost * eachCnt;
    }

    cout << (totalCost == calcedTotal ? "Yes" : "No");

    return 0;
}