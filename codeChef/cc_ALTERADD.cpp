#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int a, b;
		cin>>a>>b;

		int diff = b - a;
		int numerator = diff + 1;
		if(numerator % 3 == 0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	return 0;
}