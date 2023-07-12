#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int loopedCnt = 0;

int recursion(const char* s, int l, int r)
{
    ++loopedCnt;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    int loop;
    string s;
    cin >> loop;

    cin.ignore();

    for (int i = 0; i < loop; ++i)
    {
        loopedCnt = 0;
        getline(cin, s);
        cout << isPalindrome(s.c_str()) << ' ';
        cout << loopedCnt << '\n';
    }
}