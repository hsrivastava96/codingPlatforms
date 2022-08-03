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

		int ht[1001], maxF = 0;
		for(int i = 0; i < 1001; i++)
		    ht[i] = 0;
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			ht[val]++;
			if(ht[val] > maxF)
				maxF = ht[val];
		}
		cout<<(n - maxF)<<endl;
// 		for(int i = 0; i < )
	}

	return 0;
}