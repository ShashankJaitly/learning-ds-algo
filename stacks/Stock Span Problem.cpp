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
    int arr[] = {100, 80, 60, 70, 60, 75, 85};

    stack<pair<int, int>> stc;
    vector<int> vec;
    for (int i = 0; i < 7; i++)
    {
        if (stc.empty())
        {
            vec.push_back(-1);
        }
        else if (stc.size() > 0 && stc.top().first > arr[i])
        {
            vec.push_back(stc.top().second);
        }
        else if (stc.size() > 0 && stc.top().first <= arr[i])
        {
            while (stc.size() > 0 && stc.top().first <= arr[i])
            {
                stc.pop();
            }
            if (stc.size() == 0)
            {
                vec.push_back(-1);
            }
            else if (stc.size() > 0 && stc.top().first > arr[i])
            {
                vec.push_back(stc.top().second);
            }
        }
        stc.push({arr[i], i});
    }
    for (int i = 0; i < vec.size(); i++)
        cout << i - vec[i] << " ";
    return 0;
}