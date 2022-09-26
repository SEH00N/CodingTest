#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string implode(vector<char> vec)
{
    string s = "";
    vector<char>::iterator it = vec.begin();
    
    while (it < vec.end())
        s += *it++;

    return s;
}

string solution(string s) {
    vector<char> vec;

    for (auto x : s)
        vec.push_back(x);

    sort(vec.rbegin(), vec.rend());

    return implode(vec);
}

int main()
{
    cout << solution("bcAd") << endl;

    return 0;
}