#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int s, n, l = 0;
    multimap<int, int> map;
    multimap<int, int>::iterator itr;
    cin >> s >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        map.insert(pair<int, int>(x, y));
    }
    for (itr = map.begin(); itr != map.end(); ++itr)
    {
        if (s > itr->first)
        {
            s = s + itr->second;
        }
        else
        {
            l = 1;
            break;
        }
    }
    if (!l == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}