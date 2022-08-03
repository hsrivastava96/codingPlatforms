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
		string s1, s2;
		cin>>s1>>s2;

		int hash[27];
		for(int i = 0; i < 27; i++)
			hash[i] = 0;

		for(int i = 0; i < n; i++)
		{
			if(s1[i] != s2[i])
			{
				int hashVal = s2[i] - 96;
				hash[hashVal]++;
			}
		}		

		int count = 0;
		for(int i = 1; i < 27; i++)
		{
			if(hash[i] > 0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}