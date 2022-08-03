#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int f1=0, f2=0;
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			if(val == 1)
				f1++;
			else
				f2++;
		}

		if(n%2 == 0)
		{
			int diff = 0, ans = 0;
			if(f1>f2)
			{
				diff = f1 - f2;
				ans = diff/2;
			}
			else
			{
				diff = f2 - f1;
				ans = diff/2;
			}
			cout<<ans<<endl;
		}
		else
			cout<<-1<<endl;
	}

	return 0;
}