#include <bits/stdc++.h>
using namespace std;
int task(string &s)
{
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
                cout << " ";

            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }
    return 0;
}

int main()
{
    string str;
    int flag = 0;
    cin >> str;
    task(str);
    return 0;
}