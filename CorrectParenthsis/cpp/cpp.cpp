#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int temp = 0;

    for (auto x : s)
    {
        if (x == '(')
            temp++;
        else
            if (temp <= 0)
                return false;
            else
                temp--;
    }
    
    answer = temp == 0;

    return answer;
}

int main()
{
    cout << (solution("()()(()))") == 1 ? "true" : "false") << endl;

    return 0;
}