#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	for(int i = 0; i < t; i++)
	{
		double x, y, ptime = 0;
		cin>>x>>y;

		ptime = x * 1.07;
		if(y <= ptime)
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