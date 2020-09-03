#include <bits/stdc++.h>
using namespace std;
bool subset_sum(vector<int> &wt, int sum)
{
    int n = wt.size(), w = sum;
    bool t[n + 1][w + 1];
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
    return t[n][w];
}
int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    vector<int> wt;
    int n, wi, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> wi;
        wt.push_back(wi);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + wt[i];
    }
    if (sum % 2 != 0)
    {
        cout << boolalpha << 0;
        return 0;
    }
    else
    {
        bool res = subset_sum(wt, sum / 2);
        cout << boolalpha << res;
        return 0;
    }
}