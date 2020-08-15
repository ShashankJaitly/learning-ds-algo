#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - p;
    int L[600], R[600];
    for (int i = 1; i <= n1; i++)
    {
        L[i] = A[p + i - 1];
    }
    for (int j = 1; j <= n2; j++)
    {
        R[j] = A[q + j];
    }
    L[n1 + 1] = 9999999;
    R[n2 + 1] = 9999999;
    int i = 0, j = 0;
    while (i < n1 + 1 && j < n2 + 1)
    {
        if (L[i] <= R[j])
        {
            A[p] = L[i];
        }
        else
        {
            A[p] = R[j];
        }
        p++;
    }
}
void merge_sort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = floor((p + r) / 2);
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
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
    int p, r, A[1000], ai;
    p = 0;
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        cin >> ai;
        A[i] = ai;
    }
    merge_sort(A, p, r);
    cout << "Sorted array : ";
    for (auto i : A)
        cout << i << " ";
    return 0;
}