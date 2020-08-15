#include<bits/stdc++.h>
using namespace std;
template <typename T>
int abr(T x)
{
	if (x.size() > 10)
		cout << x.front() << (x.size()-2) << x.back() << endl;
	else 
		cout << x << endl;
	return 0 ;
}
int main()
{

	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		abr<string>(str);
	}
	return 0;
}