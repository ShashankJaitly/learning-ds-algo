#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    //fro getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writting output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n, k, i = 0, j = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT16_MIN;
    int sum = 0;
    while (j < n)
    {
        sum += arr[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    cout << mx;
    return 0;
}
