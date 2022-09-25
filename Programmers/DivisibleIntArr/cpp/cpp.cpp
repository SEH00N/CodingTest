#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (auto i : arr)
        if (i % divisor == 0)
            answer.push_back(i);

    if (answer.size() == 0)
    {
        answer.push_back(-1);
        return answer;
    }

    sort(answer.begin(), answer.end());

    return answer;
}

int main()
{
    for (auto i : solution({ 1, 2, 3, 4 }, 2))
        cout << i << ' ';

    return 0;
}