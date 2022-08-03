#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int score;
		cin>>score;
		int q = score/100;
		int rem = score%100;
		int total = q + rem;
		if(total <= 10)
			cout<<total<<endl;
		else
			cout<<(-1)<<endl;		
	}

	return 0;
}