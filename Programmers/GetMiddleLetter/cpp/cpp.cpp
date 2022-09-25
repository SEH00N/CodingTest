#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	int l = s.size();
	string answer = l % 2 == 0 ? string(1, s[l / 2 - 1]) + string(1, s[l / 2]) : string(1, s[l / 2]);

    return answer;
}

int main()
{
    cout << solution("abcde") << endl;

    return 0;
}