#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inputCnt, loopCnt;
    string str;
    cin >> inputCnt;

    for (int i = 0; i < inputCnt; i++)
    {
        cin >> loopCnt >> str;
        for (int j = 0; j < str.length(); j++)
            for (int k = 0; k < loopCnt; k++)
                cout << str[j];
        cout << '\n';
    }
}