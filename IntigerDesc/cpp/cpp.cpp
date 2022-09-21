#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> vec;

    while (n > 0)
    {
        vec.push_back(n % 10);
        n = floor(n / 10);
    }

    sort(vec.rbegin(), vec.rend());

    int length = vec.size();
    for (int i = 0; i < length; i++)
        answer += vec[i] * pow(10, length - i - 1);

    return answer;
}

int main()
{
    cout << solution(118372) << endl;

    return 0;
}