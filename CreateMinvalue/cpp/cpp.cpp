#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    while (!B.empty())
    {
        answer += A.back() * B.front();
        A.pop_back();
        B.erase(B.begin());
    }

    return answer;
}

int main()
{
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(4);
    vec1.push_back(2);
    
    vector<int> vec2;
    vec2.push_back(5);
    vec2.push_back(4);
    vec2.push_back(4);

    cout << solution(vec1, vec2);

    return 0;
}