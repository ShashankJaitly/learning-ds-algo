#include <bits/stdc++.h>
using namespace std;
int task(string &x)
{
    string y;
    for (int i = 0; i < x.size(); i += 2)
        y.push_back(x[i]);
    sort(y.begin(), y.end());
    for (int i = 0; i < y.size() - 1; i++)
        cout << y[i] << "+";
    cout << y[y.size() - 1];
    return 0;
}
int main()
{

    string str;
    cin >> str;
    task(str);
    return 0;
}