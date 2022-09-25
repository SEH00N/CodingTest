#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    if (arr.size() <= 1)
    {
        answer.push_back(-1);
        return answer;
    }

    vector<int>::iterator minPoint = arr.begin();
    vector<int>::iterator i = arr.begin();
    while (i != arr.end())
    {
        if (*minPoint > *i)
            minPoint = i;
        i++;
    }

    arr.erase(minPoint);

    return arr;
}

int main()
{
    for (auto i : solution({ 1, 2, 3, -1 }))
        cout << i << endl;
}