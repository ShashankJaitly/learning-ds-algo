#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int min_ele;
int get_min()
{
    if (s.size() == 0)
        return -1;
    return min_ele;
}
void push(int x)
{
    if (s.size() == 0)
    {
        s.push(x);
        min_ele = x;
    }
    else
    {
        if (x >= min_ele)
            s.push(x);
        else if (x < min_ele)
        {
            s.push(2 * x - min_ele);
            min_ele = x;
        }
    }
}
void pop()
{
    if (s.size() == 0)
        return -1;
    else
    {
        if (s.top() >= min_ele)
            s.top();
        else if (s.top() < min_ele)
        {
            min_ele = 2 * min_ele - s.top();
            s.pop();
        }
    }
}
int top()
{
    if (s.size() == 0)
        return -1;
    else
    {
        if (s.top() >= min_ele)
            return s.top() else if (s.top() < min_ele) return min_ele;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}