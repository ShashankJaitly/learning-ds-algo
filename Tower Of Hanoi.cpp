#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n, int &count)
{
    count++;
    if (n == 1)
    {
        cout << "Move " << n << " from " << s << " to " << d << endl;
        return;
    }
    else
    {
        solve(s, h, d, n - 1, count);
        cout << "Move " << n << " from " << s << " to " << d << endl;
        solve(h, d, s, n - 1, count);
        return;
    }
}

int main()
{
    int n, count = 0, s = 1, h = 2, d = 3;
    cin >> n;
    solve(s, d, h, n, count);
    cout << "No. of steps were " << count;
    return 0;
}