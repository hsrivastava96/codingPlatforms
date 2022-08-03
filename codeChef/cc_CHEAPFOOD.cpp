#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	double soln[t];
	for(int i = 0; i < t; i++)
	{
		double n;
		cin>>n;

		double d = 0.1 * n; 
		if(d > 100)
			soln[i] = d;
		else
			soln[i] = 100;
	}


	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}