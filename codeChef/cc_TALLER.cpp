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
		if(x>y)
			soln[i] = 0;
		else
			soln[i] = 1;
	}
	
	for(int i = 0; i < t; i++)
	{
		if(soln[i] == 0)
			cout<<'A'<<endl;
		else
			cout<<'B'<<endl;
	}

	return 0;
}