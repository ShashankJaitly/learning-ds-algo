#include <bits/stdc++.h>
using namespace std;

int task(int &a, int &b)
{
    a = abs(a - 3);
    b = abs(b - 3);
    return a + b;
}
int main()
{
    int m, i, j, o, p;
    vector<vector<int>> vec;
    for (i = 0; i < 5; i++)
    {
        vector<int> row;
        for (j = 0; j < 5; j++)
        {
            cin >> m;
            if (m == 1)
            {
                o = i + 1;
                p = j + 1;
            }
            row.push_back(m);
        }
        vec.push_back(row);
    }
    cout << task(o, p);
    return 0;
}