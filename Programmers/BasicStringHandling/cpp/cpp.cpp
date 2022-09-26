#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool tryParse(string s)
{
    try {
        stoi(s);
        return true;
    }
    catch (exception const& e) {
        return false;
    }
}

bool solution(string s) {
    bool answer = s.size() == 4 || s.size() == 6;
    if (!answer) return answer;

    for (auto x : s)
    {
        answer &= tryParse(string(1, x));
        if (!answer)
            break;
    }

    return answer;
}

int main()
{
    cout << solution("ee") << endl;

    return 0;
}