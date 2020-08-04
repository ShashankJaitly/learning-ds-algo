#include<bits/stdc++.h>
using namespace std;

void solve(int open, int close, string op, vector<string>& vec)
{
	if (close == 0 && open == 0)
	{
		vec.push_back(op);
		return;
	}
	if (open != 0)
	{
		string op1 = op;
		op1.push_back('(');
		solve(open - 1, close, op1, vec);
		
	}
	if (close > open)
	{
		string op2 = op;
		op2.push_back(')');
		solve(open, close - 1, op2, vec);
		
	}
}

void func(int n)
{
	
	return ;
}



int main()
{
	int n, open, close;
	vector<string> vec;
	string op = "";
	
	cin >> n;
	
	open = n;
	close = n;
	
	solve(open, close, op, vec);

	for (auto v : vec)
		cout << v << " ";
	return 0;
}
