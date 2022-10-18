#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> tempVec;
        for (int j = 0; j < arr1[i].size(); j++)
            tempVec.push_back(arr1[i][j] + arr2[i][j]);

        answer.push_back(tempVec);
    }

    return answer;
}

int main()
{
    for (auto x : solution({ {1, 2} , {2, 3} }, { {3, 4} , {5, 6} }))
    {
		for (auto y : x)
			cout << y << ' ';

		cout << endl;
    }

    return 0;
}