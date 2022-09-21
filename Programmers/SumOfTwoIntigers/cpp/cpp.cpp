#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a > b)
    {
        long long temp = b;
        b = a;
        a = temp;
    }

    for (long long i = a; i <= b; i++)
        answer += i;

    return answer;
}

int main()
{
    cout << solution(5, 3) << endl;

    return 0;
}