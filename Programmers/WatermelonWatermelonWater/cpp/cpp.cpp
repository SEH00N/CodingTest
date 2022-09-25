#include <iostream>
#include <string>
#include <vector>

using namespace std;

string repeat(string source, int count)
{
    string returnValue;

    for (int i = 0; i < count; i++)
        returnValue += source;

    return returnValue;
}

string solution(int n) {
    string answer = repeat("수박", (n + 1) / 2).substr(0, n * 2);

    return answer;
}

int main()
{
    cout << solution(3) << endl;
    cout << solution(4) << endl;
    cout << solution(5) << endl;
    return 0;
}