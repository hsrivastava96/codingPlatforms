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

		if(z%x == 0 && z%y == 0)
			soln[i] = 0;
		else if(z%x == 0 && z%y != 0)
			soln[i] = 1;
		else if(z%x != 0 && z%y == 0)
			soln[i] = 2;
		else
			soln[i] = 3;

	}
	
	for(int i = 0; i < t; i++)
	{
		if(soln[i] == 0)
			cout<<"ANY"<<endl;
		else if(soln[i] == 1)
			cout<<"CHICKEN"<<endl;
		else if(soln[i] == 2)
			cout<<"DUCK"<<endl;
		else
			cout<<"NONE"<<endl;
	}
	return 0;
}