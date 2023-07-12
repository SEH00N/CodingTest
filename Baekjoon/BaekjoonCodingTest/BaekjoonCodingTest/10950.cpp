#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cnt, x, y;
    vector<int> results;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> x >> y;
        results.push_back(x + y);
    }

    for (int x : results)
        cout << x << endl;

    return 0;
}