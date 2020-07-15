#include <bits/stdc++.h>
using namespace std;

int task(string &s)
{
    int j = 0, flag = 0;
    string z = "hello";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == z[j])
        {
            j++;
            flag++;
            if (flag == 5)
                break;
        }
    }
    if (flag == 5)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
}
int main()
{

    string str;
    cin >> str;
    task(str);
    return 0;
}