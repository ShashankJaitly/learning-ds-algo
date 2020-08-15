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
    vector<int> wt;
    int n, w, wi;
    cin >> n >> w;
    bool t[n + 1][w + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> wi;
        wt.push_back(wi);
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {

            if (i == 0)
            {
                t[i][j] = false;
            }
            else if (j == 0)
            {
                t[i][j] = true;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = t[i - 1][j - wt[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << boolalpha << t[n][w];
    return 0;
}