#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

    for (int x : arr)
        answer += x;
    
    answer /= arr.size();

    return answer;
}

int main()
{
    vector<int> vec = vector<int>({ 1, 2, 3, 4 });

    cout << solution(vec) << endl;

    return 0;
}