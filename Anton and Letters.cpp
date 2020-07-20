#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> set;
    char ch;
    while (cin >> ch)
    {
        if (isalpha(ch))
            set.insert(ch);
    }
    cout << set.size();
    return 0;
}