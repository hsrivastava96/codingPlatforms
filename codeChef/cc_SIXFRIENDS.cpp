#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	int soln[t];
	for(int i = 0; i < t; i++)
	{
		int x, y;
		cin>>x>>y;
		if(3*x < 2*y)
			soln[i] = 3*x;
		else
			soln[i] = 2*y;
	}

	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}