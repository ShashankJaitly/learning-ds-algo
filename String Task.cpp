#include <bits/stdc++.h>
using namespace std;
void task(string x)
{
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'y')
        {
            x.erase(x.begin() + i);
            i -= 1;
        }
    }
    for (auto v : x)
    {
        cout << "." << v;
    }
}
int main()
{

    string str;
    cin >> str;
    task(str);
    return 0;
}