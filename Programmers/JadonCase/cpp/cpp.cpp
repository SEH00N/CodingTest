#include <string>
#include <vector>
#include <iostream>

using namespace std;

void replace(char& target, char value)
{
    target = value;
}

string solution(string s) {
    string answer = s;

    for(char& c : answer)
        c = tolower(c);

    replace(answer[0], toupper(answer[0]));

    for (int i = 0; i < answer.length(); i++)
        if (answer[i] == ' ' && i + 1 < answer.length())
            replace(answer[i + 1], toupper(answer[i + 1]));

    return answer;
}

int main()
{
    cout << solution("console  dot write line ");

    return 0;
}