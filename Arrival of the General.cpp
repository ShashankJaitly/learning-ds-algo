#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, p;
    vector<int> vec;
    vector<int>::iterator it;
    vector<int>::reverse_iterator revit;
    cin >> n;
    while (cin >> m)
        vec.push_back(m);
    it = find(vec.begin(), vec.end(), *max_element(vec.begin(), vec.end()));
    m = distance(vec.begin(), it);
    revit = find(vec.rbegin(), vec.rend(), *min_element(vec.rbegin(), vec.rend()));
    p = distance(vec.rbegin(), revit);
    if (p + m >= n)
        cout << p + m - 1;
    else
        cout << p + m;
    return 0;
}