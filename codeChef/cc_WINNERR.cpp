#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		int x, y, z, w, p = 0, q = 0;
		cin>>w>>x>>y>>z;

		if(w>x)
			p = w;
		else
			p = x;

		if(y>z)
			q = y;
		else
			q = z;

		if(p < q)
			cout<<"P"<<endl;
		else if(p == q)
			cout<<"Tie"<<endl;
		else
			cout<<"Q"<<endl;
	}

	return 0;
}