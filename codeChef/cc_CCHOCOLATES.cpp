#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		int x, y, z;
		cin>>x>>y>>z;

		int tot = x*5 + y*10;
		cout<<tot/z<<endl;
	}

	return 0;
}