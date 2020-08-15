#include <bits/stdc++.h>
using namespace std;
int task(int &l, int &m, int &n)
{
    int sum = l + m + n;
    sum = max(sum, (l + m) * n);
    sum = max(sum, l * (m + n));
    sum = max(sum, l * m * n);
    return sum;
}
int main()
{
    int l, m, n;
    cin >> l >> m >> n;
    cout << task(l, m, n);
    return 0;
}