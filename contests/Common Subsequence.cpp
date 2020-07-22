#include <bits/stdc++.h>
using namespace std;

int task(vector<int> &vn, int &n, vector<int> &vm, int &m)
{
    vector<int> sub;
    for (auto i : vn)
    {
        for (auto j : vm)
            if (i == j && sub.size() < 1)
            {
                sub.push_back(i);
            }
    }
    if (sub.size() != 0)
    {
        cout << "YES" << endl;
        cout << sub.size() << " " << sub[0] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
int main()
{
    int t, n, m, l;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> vn = {}, vm = {};
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> l;
            vn.push_back(l);
        }
        for (int k = 0; k < m; k++)
        {
            cin >> l;
            vm.push_back(l);
        }
        task(vn, n, vm, m);
    }
    return 0;
}