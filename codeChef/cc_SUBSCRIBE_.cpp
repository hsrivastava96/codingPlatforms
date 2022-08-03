#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, x;
		cin>>n>>x;

		if(n > 6)
		{
			if(n%6 == 0)
				cout<<(x*n/6)<<endl;
			else
			{
			    int val = n/6;
			    int s1 = val*x;
			    int s2 = s1 + x;
				cout<<s2<<endl;
			}
		}
		else
			cout<<x<<endl;
	}

	return 0;
}