#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, cost = 0;
    cin >> n >> m >> a >> b;

    if (m * a > b)
    {
        if ((n % m) * a > b)
            cost = ((n / m) * b) + b;
        else
            cost = (n / m) * b + (n % m) * a;
    }
    else
    {
        cost = n * a;
    }

    cout << cost;
    return 0;
}