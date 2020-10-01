#include <bits/stdc++.h>
using namespace std;
void frknap(int w[], int p[], int W, int n)
{

    int X[n];
    for (int i = 1; i < n; i++)
    {
        X[i] = 0;
    }
    int weight = 0;
    for (int i = 1; i < n; i++)
    {
        if (weight + w[i] <= W)
        {
            X[i] = 1;
            weight += w[i];
        }
        else
        {
            X[i] = (W - weight) / w[i];
            weight = W;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        cout << X[i] << " ";
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
    int n, i, W;
    cout << "Enter no. of elements:" << endl;
    cin >> n >> ;
    int w[n + 1], p[n + 1];
    cout << "Enter weights: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cout << "Enter profits: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout << "Output array: " << endl;
    frknap(w, p, W, n);
    return 0;
}
