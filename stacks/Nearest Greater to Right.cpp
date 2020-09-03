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
    int arr[] = {1, 3, 2, 4};

    stack<int> stc;
    vector<int> vec;
    for(int i = 4; i >=0; i--)
    {
        if(stc.empty())
        {
            vec.push_back(-1);
        }
        else if(stc.size()>0 && stc.top() > arr[i])
        {
            vec.push_back(stc.top());
        }
        else if(stc.size()>0 && stc.top()<=arr[i])
        {
            while(stc.size()>0 && stc.top()<=arr[i])
            {
                stc.pop();
            }
            if(stc.size() == 0)
            {
                vec.push_back(-1);
            }
            else if(stc.size()>0 && stc.top()>arr[i])
            {
                vec.push_back(stc.top());
            }
        }
        stc.push(arr[i]);
    }
    reverse(vec.begin(), vec.end());
    for(auto v: vec)
        cout << v << " ";
    return 0;
}