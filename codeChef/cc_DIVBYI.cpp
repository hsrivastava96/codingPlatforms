#include<bits/stdc++.h>
using namespace std;

void soln(int i, int n, int pi, int pi_1)
{
	if(i > 0)
	{
		int diff = n-i, p = 0;
		if(diff % 2 == 0)
		{	
			p = pi_1;
			soln(i-1, n, pi, pi_1-1);
		}
		else 
		{
			p = pi;
			soln(i-1, n, pi+1, pi_1);
		}
		cout<<p<<" ";
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		soln(n, n, 1, n);		
		cout<<endl;
	}

	return 0;
}