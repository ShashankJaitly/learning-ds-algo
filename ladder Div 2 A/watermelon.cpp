#include <bits/stdc++.h>
using namespace std;
template <typename T>
T test(T x)
{
    if (x > 2 && x % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
int main()
{
    int w;
    cin >> w;
    test<int>(w);
    return 0;
}