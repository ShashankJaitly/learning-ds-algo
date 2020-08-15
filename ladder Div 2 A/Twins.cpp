#include <bits/stdc++.h>
using namespace std;

int task(vector<int> &v)
{
    vector<int> z;
    int i = 0, p;
    while (accumulate(v.begin(), v.end(), 0) >= accumulate(z.begin(), z.end(), 0))
    {
        p = v[v.size() - 1];
        v.pop_back();
        z.push_back(p);
        i++;
    }
    return i;
}
int main()
{

    int n, m;
    vector<int> vec;
    cin >> n;
    while (cin >> m)
        vec.push_back(m);
    sort(vec.begin(), vec.end());
    cout << task(vec);
    return 0;
}