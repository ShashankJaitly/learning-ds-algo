#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool poftwo(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;
            continue;
        }
        if (poftwo(n))
            cout << "-1" << endl;
        else
        {
            ll a[n + 1];
            for (int k = 1; k <= n; k++)
                a[k] = k;
            a[1] = 2, a[2] = 3, a[3] = 1;
            for (int k = 4; k <= n; k++)
            {
                if (poftwo(k))
                {
                    swap(a[k], a[k + 1]);
                    k++;
                }
            }
            for (int k = 1; k <= n; k++)
                cout << a[k] << " ";
            cout << endl;
        }
    }
    return 0;
}
