#include <iostream>
#include <string>

using namespace std;

int main()
{
    int letters[26], answer = 0;

    letters['A' - 'A'] = 2;
    letters['B' - 'A'] = 2;
    letters['C' - 'A'] = 2;
    letters['D' - 'A'] = 3;
    letters['E' - 'A'] = 3;
    letters['F' - 'A'] = 3;
    letters['G' - 'A'] = 4;
    letters['H' - 'A'] = 4;
    letters['I' - 'A'] = 4;
    letters['J' - 'A'] = 5;
    letters['K' - 'A'] = 5;
    letters['L' - 'A'] = 5;
    letters['M' - 'A'] = 6;
    letters['N' - 'A'] = 6;
    letters['O' - 'A'] = 6;
    letters['P' - 'A'] = 7;
    letters['Q' - 'A'] = 7;
    letters['R' - 'A'] = 7;
    letters['S' - 'A'] = 7;
    letters['T' - 'A'] = 8;
    letters['U' - 'A'] = 8;
    letters['V' - 'A'] = 8;
    letters['W' - 'A'] = 9;
    letters['X' - 'A'] = 9;
    letters['Y' - 'A'] = 9;
    letters['Z' - 'A'] = 9;

    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i)
        answer += letters[str[i] - 'A'] + 1;

    cout << answer;

    return 0;
}