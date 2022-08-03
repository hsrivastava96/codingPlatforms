#include<bits/stdc++.h>
using namespace std;


int getCount(int a, int b, int c)
{
	if(a%3 == 0 || b%3 == 0)
		return c;
	else
	{
		int diff = 0;
		if(a>b)
			diff = a-b;
		else
			diff = b-a;

		int l = getCount(diff, b, c+1);
		int r = getCount(a, diff, c+1);

		if(l<r)
			return l;
		else
			return r;
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int x, y;
		cin>>x>>y;

		// int result = getCount(a, b, 0);
		int count = 0;
		while(x%3 != 0 && y%3 != 0)
		{
			if(x>y)
				x = x-y;
			else
				y = y-x;
			count++;
		}
		cout<<count<<endl;
	}

	return 0;
}