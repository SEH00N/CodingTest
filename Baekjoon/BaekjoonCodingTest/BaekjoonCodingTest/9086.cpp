#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int loopCnt;
    cin >> loopCnt;

    cin.ignore();

    for (int i = 0; i < loopCnt; i++)
    {
        getline(cin, str);
        cout << str[0] << str[str.length() - 1] << '\n';
    }

    return 0;
}