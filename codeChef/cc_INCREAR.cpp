#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		int x, y;
        cin>>x>>y;
		if(y > x)
			cout<<(y-x)<<endl;
		else
		{
			if((x-y)%2 == 0)
				cout<<((x-y)/2)<<endl;
			else
				cout<<(((x-y)/2)+2)<<endl;
		}
	}

	return 0;
}