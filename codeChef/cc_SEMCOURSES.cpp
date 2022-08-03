#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	for(int i = 0; i < t; i++)
	{
		int x, y, z;
		cin>>x>>y>>z;
		soln[i] = x*y*z;
	}
	
	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}