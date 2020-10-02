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
    long long int t, n, k, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int arr[n];
        stack<long long int> st;
        st.push(0);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            st.top() += arr[i];
            if (st.top() < k)
            {
                cout << i + 1 << endl;
                break;
            }
            else if (i == n - 1 && st.top() > k)
            {
                long long int rm = i + st.top() / k + 1;
                cout << rm << endl;
                break;
            }
            else
            {
                st.top() -= k;
            }
        }
    }
    return 0;
}
