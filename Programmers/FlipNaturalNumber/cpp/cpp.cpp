#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    for (auto x : to_string(n))
        answer.insert(answer.begin(), x - 48);

    return answer;
}

int main()
{
    for (auto x : solution(123123))
        cout << x << endl;

    return 0;
}