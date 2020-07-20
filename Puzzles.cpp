#include <bits/stdc++.h>
using namespace std;
int task(vector<int> &v, int &n, int &m)
{
    sort(v.begin(), v.end());
    int l = v[n - 1] - v[0];
    for (int i = 1; i <= (m - n); ++i)
    {
        if ((v[i + n - 1] - v[i]) < l)
        {
            l = v[i + n - 1] - v[i];
        }
    }
    cout << l;
    return 0;
}
int main()
{
    int n, m, f;
    vector<int> vec;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> f;
        vec.push_back(f);
    }

    return task(vec, n, m);
}