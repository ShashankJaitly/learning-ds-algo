#include <bits/stdc++.h>
using namespace std;
int task(vector<int> &h, vector<int> &g)
{
    int res = 0;
    for (auto v : g)
        res += count(h.begin(), h.end(), v);
    return res;
}

int main()
{
    int i, j, n, m;
    vector<vector<int>> vec;
    vector<int> hvec;
    vector<int> gvec;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        vector<int> row;
        for (j = 0; j < 2; j++)
        {
            cin >> m;
            row.push_back(m);
        }
        vec.push_back(row);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (j == 0)
                hvec.push_back(vec[i][j]);
            else
                gvec.push_back(vec[i][j]);
        }
    }
    cout << task(hvec, gvec);
    return 0;
}