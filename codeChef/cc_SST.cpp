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

		int a = x * 10, b = y * 5; 
		if(a > b)
			soln[i] = 1;
		else if(a < b)
			soln[i] = 2;
		else
			soln[i] = 3;
	}


	for(int i = 0; i < t; i++)
	{
		if(soln[i] == 1)
			cout<<"FIRST"<<endl;
		else if(soln[i] == 2)
			cout<<"SECOND"<<endl;
		else
			cout<<"ANY"<<endl;
	}
	return 0;
}