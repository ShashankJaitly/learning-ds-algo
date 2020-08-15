#include<bits/stdc++.h>
using namespace std;

void solve(int k, int p, multimap<int, int>& map)
{	
	if(k%p==0)
	{	
		long long int m = k/p; 
		map.insert({m, p});
		return;
	}
	return;
}
int main()
{
    #ifndef ONLINE_JUDGE
        //fro getting input from input.txt
        freopen("input.txt", "r", stdin);
        //for writting output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    int t, n;
	long long int k, p;
	cin >> t;
	while(t--)
	{	
		multimap<int, int> map;
		cin >> n >> k;
		while(n--)
		{
			cin >> p;
			if(p<k)
			{
				solve(k, p, map);
			}
		}
		if(!map.empty())
		{	
			auto itr = map.begin();
			cout << itr->second<<endl;
		}
		else
		{
			cout << "-1" << endl;
		}
		
	}
	return 0;
}