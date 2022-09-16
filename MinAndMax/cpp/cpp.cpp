#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = 0;
    stringstream ss(s);
    vector<int> tempVec;

    while (ss >> temp)
        tempVec.push_back(temp);

    sort(tempVec.begin(), tempVec.end());

    answer = to_string(* tempVec.begin()) + " " + to_string(*(tempVec.end() - 1));

    return answer;
}

int main()
{
    cout << solution("-1 -2 -10");

    return 0;
}