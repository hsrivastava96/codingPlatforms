#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
	if(a == 0)
		return b;
	if(b == 0)
		return a;
	if(a == b)
		return a;
	if(a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int a, b;
		cin>>a>>b;

		int diff = abs(a - b);
		int hash[diff+1];
		for(int i = 0; i <= diff; i++)
			hash[i] = 0;
		for(int i = 0; i <= diff; i++)
		{
			int g = gcd(a+i, b+i);
			if(hash[g] != 0)
				break;
			hash[g]++;
		}
		int count =0;
		for(int i = 0; i <= diff; i++)
		{
			if(hash[i] > 0)
				count++;
		}
		cout<<count<<endl;
	}

	return 0;
}