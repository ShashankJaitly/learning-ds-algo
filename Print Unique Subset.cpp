#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op, set<string> &set)
{
    if (ip.empty())
    {
        set.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip, op1, set);
    solve(ip, op2, set);
    return;
}
int main()
{
    set<string> set;
    string ip;
    cin >> ip;
    string op = "";
    solve(ip, op, set);
    for (auto s : set)
    {
        cout << s << " ";
    }
    return 0;
}