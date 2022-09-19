#include <string>
#include <vector>
#include <iostream>
#include <tgmath.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    float root = sqrt(n);

    for (int i = 1; i <= root; i++)
        if (n % i == 0)
        {
            answer += i;
            if (n / i != i)
                answer += n / i;
        }

    return answer;
}

int main()
{
    cout << solution(12) << endl;

    return 0;
}