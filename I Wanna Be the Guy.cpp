#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n, p, q, l;
    cin >> n >> p;
    int count = 0;

    for (int i = 0; i < p; i++)
    {
        cin >> l;
        vec.push_back(l);
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> l;
        vec.push_back(l);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < p + q; i++)
    {
        if (vec[i] != vec[i + 1])
        {
            count++;
        }
    }

    if (n == (count))
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}