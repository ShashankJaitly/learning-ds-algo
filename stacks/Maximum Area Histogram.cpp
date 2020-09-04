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
    int arr[] = {6, 2, 5, 4, 5, 1, 6};

    stack<pair<int, int>> stc;
    stack<pair<int, int>> stc2;
    vector<int> left;
    vector<int> right;
    vector<int> width;
    vector<int> area;
    for (int i = 0; i < 7; i++)
    {
        if (stc.empty())
        {
            left.push_back(-1);
        }
        else if (stc.size() > 0 && stc.top().first < arr[i])
        {
            left.push_back(stc.top().second);
        }
        else if (stc.size() > 0 && stc.top().first >= arr[i])
        {
            while (stc.size() > 0 && stc.top().first >= arr[i])
            {
                stc.pop();
            }
            if (stc.size() == 0)
            {
                left.push_back(-1);
            }
            else if (stc.size() > 0 && stc.top().first < arr[i])
            {
                left.push_back(stc.top().second);
            }
        }
        stc.push({arr[i], i});
    }
    for (int i = 6; i >= 0; i--)
    {
        if (stc2.empty())
        {
            right.push_back(7);
        }
        else if (stc2.size() > 0 && stc2.top().first < arr[i])
        {
            right.push_back(stc2.top().second);
        }
        else if (stc2.size() > 0 && stc2.top().first >= arr[i])
        {
            while (stc2.size() > 0 && stc2.top().first >= arr[i])
            {
                stc2.pop();
            }
            if (stc2.size() == 0)
            {
                right.push_back(7);
            }
            else if (stc2.size() > 0 && stc2.top().first < arr[i])
            {
                right.push_back(stc2.top().second);
            }
        }
        stc2.push({arr[i], i});
    }
    reverse(right.begin(), right.end());

    for (int i = 0; i < 7; i++)
        width.push_back(right[i] - left[i] - 1);
    for (int i = 0; i < 7; i++)
        area.push_back(arr[i] * width[i]);
    cout << *max_element(area.begin(), area.end());
    return 0;
}