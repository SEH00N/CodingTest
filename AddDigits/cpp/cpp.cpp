#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string stringValue = to_string(n);

    for (auto x : stringValue)
        answer += x - 48;

    return answer;
}

int main()
{
    cout << solution(1237) << endl;

    return 0;
}