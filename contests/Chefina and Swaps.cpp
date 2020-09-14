#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll pos(ll t)
{
    long double a = sqrt(1ul + 4 * (t));
    a = a - 1.0;
    a = a / 2.0;
    return a;
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
        if (n == 0 || n == 1 || n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        ll t1 = (n * (n + 1)) / 2;
        if (t1 % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }

        ll ind = pos(t1);
        ll s = ind * (ind + 1) / 2;
        if (t1 / 2 == s)
        {
            ll res = (ind * (ind - 1ul)) / 2l + ((n - ind) * (n - ind - 1ul)) / 2l + (n - ind);
            cout << res << endl;
        }
        else
            cout << (n - ind) << endl;
    }
    return 0;
}