#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp = num;

    while (temp != 1 && answer < 500)
    {
        temp = temp % 2 == 0 ? temp / 2 : temp * 3 + 1;
        answer++;
    }

    if (answer == 500)
        answer = -1;

    return answer;
}

int main()
{
    cout << solution(10) << endl;

    return 0;
}