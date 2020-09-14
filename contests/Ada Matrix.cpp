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
        int n, oprn = 0;
        cin >> n;
        int p = n;
        int arr[64][64];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = n; i > 0; i--)
        {   
            if(p>0 && p-1>=0)
            {
                for (int j = n; j > 0; j--)
                {
                    if ((i + j) == 2 * p - 1)
                    {
                        if (((i - 1) * n + j) != arr[p][p - 1])
                        {

                            int k = p;
                            while (k > 0)
                            {
                                swap(arr[k][k - 1], arr[k - 1][k]);
                                k--;
                            }
                            oprn++;
                        }
                    }
                }
            }
            p--;
        }
        cout << oprn << endl;
    }

    return 0;
}