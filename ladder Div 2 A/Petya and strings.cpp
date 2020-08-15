#include <bits/stdc++.h>
using namespace std;
int task(string &x, string &y)
{
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
    if (x == y)
        return 0;
    else if (x > y)
        return 1;
    else
        return -1;
}
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << task(str1, str2);
    return 0;
}