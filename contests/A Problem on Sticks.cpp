#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, oprn = 1;
        long long int a;
        vector<long long int> arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end(), greater<int>());
        stack<int> stc;
        set<int> s;
        set<int, greater<int>>::iterator itr;
        for (int i = n; i >= 0; i--)
        {
            if (stc.empty())
            {
                s.insert(0);
            }
            else if (stc.size() > 0 && stc.top() < arr[i])
            {
                s.insert(stc.top());
            }
            else if (stc.size() > 0 && stc.top() >= arr[i])
            {
                while (stc.size() > 0 && stc.top() >= arr[i])
                {
                    stc.pop();
                }
                if (stc.size() == 0)
                {
                    s.insert(0);
                }
                else if (stc.size() > 0 && stc.top() < arr[i])
                {
                    s.insert(stc.top());
                }
            }
            stc.push(arr[i]);
        }
        for (itr = s.begin(); itr != s.end(); ++itr)
        {
            if (*itr != 0)
                oprn++;
        }

        cout << oprn << endl;
    }
    return 0;
}