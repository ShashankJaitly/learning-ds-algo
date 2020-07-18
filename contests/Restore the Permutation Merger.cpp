#include <bits/stdc++.h>
using namespace std;
int task(vector<int> &vec)
{
    vector<int>::iterator it;
    int index;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int c = count(vec.begin(), vec.end(), vec[i]);
        if (c > 1)
        {
            it = find(vec.begin(), vec.end(), vec[i]);
            vec.erase(it);
            i = i - 1;
        }
    }
    for (auto v : vec)
        cout << v << " ";
    cout << endl;
    return 0;
}

int main()
{
    int i, n, m;
    cin >> i;
    for (int j = 0; j < i; j++)
    {
        cin >> n;
        vector<int> vec;
        for (int p = 0; p < 2 * n; p++)
        {
            cin >> m;
            vec.push_back(m);
        }
        task(vec);
    }
    return 0;
}