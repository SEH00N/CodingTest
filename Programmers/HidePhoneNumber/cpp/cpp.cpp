#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();

    for (int i = 0; i < length - 4; i++)
        answer += '*';

    answer += phone_number.substr(length - 4);

    return answer;
}

int main()
{
    cout << solution("1231230000") << endl;

    return 0;
}