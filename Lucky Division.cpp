#include <bits/stdc++.h>
using namespace std;

void task(int &a)
{
    if (a % 4 == 0 || a % 7 == 0 || a % 44 == 0 || a % 47 == 0 || a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0 || a % 774 == 0 || a % 777 == 0)
    {
        cout << "YES";
        return;
    }
    else
    {
        cout << "NO";
        return;
    }
}

int main()
{

    int num;
    ;
    cin >> num;
    task(num);
    return 0;
}