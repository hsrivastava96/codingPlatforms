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
		string s;
		cin>>s;

		string sOut = "";
		for(int i = 0; i < n; i++)
		{
			if(s[i] == 65)
				sOut+=84;
			else if(s[i] == 84)
				sOut+=65;
			else if(s[i] == 67)
				sOut+=71;
			else
				sOut+=67;
		}
		cout<<sOut<<endl;
	}

	return 0;
}