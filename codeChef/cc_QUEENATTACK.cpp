#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	for(int i = 0; i < t; i++)
	{
		int n, x, y, ul = 0, ur = 0, ll = 0, lr = 0;
		cin>>n>>x>>y;

		// cal lower left
		if((n - x) <= (y - 1))
			ll = n - x;
		else
			ll = y - 1;

		// cal lower right
		if((n - x) <= (n - y))
			lr = n - x;
		else
			lr = n - y;

		// cal upper left
		if((x - 1) <= (y - 1))
			ul = x - 1;
		else
			ul = y - 1;

		// cal upper right
		if((x - 1) <= (n - y))
			ur = x - 1;
		else
			ur = n - y;

		soln[i] = 2*n + ul + ur + ll + lr - 2;
	}
	
	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;

	return 0;
}