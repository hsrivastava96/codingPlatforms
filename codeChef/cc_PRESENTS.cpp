#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	for(int i = 0; i < t; i++)
	{
		int n;
		cin>>n;
		soln[i] = (n/5)*4 + (n%5);
	}
	
	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}