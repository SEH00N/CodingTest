// WeirdStirng.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string str, char prefix);

int main()
{
    string answer = "";
    string input = "try hello world";
    vector<string> strVector = split(input, ' ');

    for(string str : strVector)
    {
        string tempStr = "";
        for (int  i = 0; i < str.length(); i ++)
            tempStr += i % 2 == 0 ? toupper(str[i]) : tolower(str[i]);

        answer += tempStr + " ";
    }

    answer.pop_back();
    cout << answer << endl;
}

vector<string> split(string str, char prefix)
{
    vector<string> returnValue = vector<string>();
    string tempStr = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == prefix)
        {
            returnValue.push_back(tempStr);
            tempStr = "";
            continue;
        }

        tempStr += str[i];
    }

    returnValue.push_back(tempStr);

    return returnValue;
}