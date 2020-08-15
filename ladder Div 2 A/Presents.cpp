#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>::iterator it;
    vector<int> vec;
    vector<int> res;
    int n, m, k;
    cin >> n;
    while (cin >> m)
        vec.push_back(m);
    for (int i = 1; i <= n; i++)
    {
        it = find(vec.begin(), vec.end(), i);
        k = distance(vec.begin(), it);
        k++;
        res.push_back(k);
    }
    for (auto v : res)
        cout << v << " ";
    return 0;
}