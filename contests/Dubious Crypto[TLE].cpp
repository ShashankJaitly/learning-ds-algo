#include <bits/stdc++.h>
using namespace std;
int task(int &l, int &r, int &m)
{
    int a, b, c, maxc_b, minc_b, mcb, n, t;
    maxc_b = r - l;
    minc_b = l - r;
    for (int i = minc_b; i < maxc_b; i++)
    {
        mcb = m + i;
        for (int j = l; j < r; j++)
        {
            if (mcb % j == 0)
            {
                a = j;
                n = (mcb / a);
                if (i > 0)
                {
                    c = r;
                    b = r - i;
                }
                else
                {
                    c = l;
                    b = l - i;
                }
                if (n == 0)
                {
                    t = c;
                    c = b;
                    b = t;
                }
                cout << a << " " << b << " " << c << " " << endl;
                return 0;
            }
        }
    }
    return 0;
}

int main()
{
    int n, l, r, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r >> m;
        task(l, r, m);
    }
    return 0;
}