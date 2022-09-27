#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getDivisors(int num)
{
    vector<int> divisors;

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            divisors.push_back(i);

    return divisors;
}

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++)
        answer += getDivisors(i).size() % 2 == 0 ? i : -i;

    return answer;
}

int main()
{
    cout << solution(13, 17) << endl;

    return 0;
}