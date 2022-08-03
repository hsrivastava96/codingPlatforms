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

		if(x == y && x > 0 && y > 0)
			soln[i] = 1;
		else
			soln[i] = 0;
	}
	
	for(int i = 0; i < t; i++)
	{
		if(soln[i] == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}