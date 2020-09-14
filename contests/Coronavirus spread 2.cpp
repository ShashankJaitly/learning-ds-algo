#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void right(vector<pair<int, int>> &row, vector<int> arr, int i)
{
    for (int j = i + 1; j < arr.size(); j++)
    {
        if (arr[j] < arr[i])
        {
            int t = (i - j) / (arr[j] - arr[i]);
            row.push_back({j, t});
        }
    }
}
void left(vector<pair<int, int>> &row, vector<int> arr, int i)
{
    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] > arr[i])
        {
            int t = (i - j) / (arr[j] - arr[i]);
            row.push_back({j, t});
        }
    }
}
vector<pair<int, int>> find(vector<int> arr, int i)
{
    vector<pair<int, int>> row;
    if (i > 0 && i < arr.size() - 1)
    {
        right(row, arr, i);
        left(row, arr, i);
    }
    else if (i == 0)
    {
        right(row, arr, i);
    }
    else if (i == arr.size() - 1)
    {
        left(row, arr, i);
    }
    return row;
}
void solve(vector<vector<pair<int, int>>> vec, vector<pair<int, int>> &row)
{
    for (int i = 0; i < row.size(); i++)
    {
        for (int j = 0; j < vec[row[i].first].size(); j++)
        {
            if (vec[row[i].first][j].second >= row[i].second)
            {
                row.push_back(vec[row[i].first][j]);
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n;
        vector<int> arr;
        vector<vector<pair<int, int>>> vec;
        vector<pair<int, int>> row;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            arr.push_back(v);
        }
        for (int i = 1; i <= n; i++)
        {
            row = find(arr, i);
            vec.push_back(row);
        }
        for (int i = 1; i <= n; i++)
        {
            solve(vec, vec[i]);
        }
        int min_infected = vec[1].size();
        int max_infected = vec[1].size();
        for (int i = 2; i <= n; i++)
        {
            if (vec[i].size() < min_infected)
            {
                min_infected = vec[i].size();
            }
            else if (vec[i].size() > max_infected)
            {
                max_infected = vec[i].size();
            }
        }
        cout << min_infected << " " << max_infected;
    }
    return 0;
}