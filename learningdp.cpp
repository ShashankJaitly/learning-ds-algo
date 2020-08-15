#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t[102][1002];
    vector<int> val;
    vector<int> wt;
    int n, w, v, wi;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        val.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wi;
        wt.push_back(wi);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] == 0;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    cout << t[n][w];
    return 0;
}