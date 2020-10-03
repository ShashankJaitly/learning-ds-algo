#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec, int k, int index)
{
    if (vec.size() == 1)
    {
        return vec[0];
    }
    index = (index + k) % vec.size();
    vec.erase(vec.begin() + index);
    solve(vec, k, index);
}
int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, index, y;
        cin >> n >> k >> index >> y;
        k -= 1;
        vector<int> vec;
        for (int i = 1; i <= n; i++)
        {
            vec.push_back(i);
        }
        int rm = solve(vec, k, index);
        if (rm == y)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
