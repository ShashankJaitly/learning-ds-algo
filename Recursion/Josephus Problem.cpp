#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& vec, int k, int index)
{
	if(vec.size() == 1)
	{
		cout << vec[0];
		return;
	}
	index = (index + k)%vec.size();
	vec.erase(vec.begin()+ index);
	solve(vec, k, index);
}


int main()
{
    int n, k, index =0;
	cin >> n >> k;
	k -= 1;
    vector<int> vec;
	for(int i = 1; i<=n; i++)
	{
		vec.push_back(i);
	}
	solve(vec, k, index);
	return 0;
}