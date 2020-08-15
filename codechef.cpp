#include<bits/stdc++.h>
using namespace std;

void task(vector<int>& op, vector<long int>& out)
{
    map<int,long int> uniq;
    int res;
    for(int i = 0; i < op.size(); i++)
    {
        uniq[op[i]]++;
    }
    auto itr = uniq.begin();
    long int max_count = 1;
    res = itr->first ;
    for(auto v: uniq)
    {
        if(max_count < v.second){
            res = v.first;
            max_count = v.second;
        }        
    }
    if(res>0)
    {
        out[res-1]++;
        return;
    }
}

void solve(vector<int> ip, vector<int> op, vector<long int>& out)
{
    if(ip.empty())
    {   
        task(op, out);
        return;
    }
    vector<int> op1 = op;
    vector<int> op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip, op1, out);
    solve(ip, op2, out);
}

int main()
{
    #ifndef ONLINE_JUDGE
        //fro getting input from input.txt
        freopen("input.txt", "r", stdin);
        //for writting output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
	int t;
    cin >> t;
	for(int i = 0; i < t; ++i)
    {   
        vector<int> ip;
        vector<int> op; 
        int n, a;       
        cin >> n;
        vector<long int> out(n,0);
        for (int i = 0; i<n; ++i)
        {
            cin >> a;
            ip.push_back(a);
        }
        solve(ip, op, out);
        for(auto v: out)
        {
            cout << v%1000000007 << " ";
        }
        cout << endl;
    }
	return 0;
}