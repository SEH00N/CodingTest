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
    string answer = repeat("수박", (n + 1) / 2).substr(0, n * 3);

    return answer;
}

int main()
{
    cout << "n * 3" << endl;
    cout << "기대값 : 수박수  결과값 : " << solution(3) << endl; // 수박수
    cout << "기대값 : 수박수박  결과값 : " << solution(4) << endl; // 수박수박
    cout << "기대값 : 수박수박수  결과값 : " << solution(5) << endl; // 수박수박수

    cout << "\n" << endl;

    cout << "n * 2" << endl;
    cout << "기대값 : 수박수  결과값 : " << repeat("수박", (3 + 1) / 2).substr(0, 3 * 2) << endl;
    cout << "기대값 : 수박수박  결과값 : " << repeat("수박", (4 + 1) / 2).substr(0, 4 * 2) << endl;
    cout << "기대값 : 수박수박수  결과값 : " << repeat("수박", (5 + 1) / 2).substr(0, 5 * 2) << endl;
    return 0;
}