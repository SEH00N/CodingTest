#include <string>
#include <vector>
#include <iostream>

using namespace std;

string removeAll(string input, char target)
{
    string returnValue = "";

    for (auto x : input)
        if (x != target)
            returnValue += x;

    return returnValue;
}

string toBinary(int input)
{
    string returnValue = "";

    while (input != 0)
    {
        returnValue.insert(0, to_string(input % 2));
        input /= 2;
    }

    return returnValue;
}

vector<int> solution(string s) {
    vector<int> answer;
    int repeatCount = 0;
    int deleteCount = 0;

    while (s.length() > 1)
    {
        repeatCount++;

        deleteCount += removeAll(s, '1').length();

        int length = removeAll(s, '0').length();

        s = toBinary(length);
    }

    answer.push_back(repeatCount);
    answer.push_back(deleteCount);

    return answer;
}

int main()
{
    vector<int> vec = solution("01110");
    cout << vec[0] << ' ' << vec[1] << endl;

    return 0;
}