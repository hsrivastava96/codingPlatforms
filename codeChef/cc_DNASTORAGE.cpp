#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s;
		cin>>n;
		cin>>s;
	
		string res = "";
		for(int i = 0; i < n; i+=2)
		{
			if(s[i] == '0' && s[i+1] == '0')
				res+="A";
			else if(s[i] == '0' && s[i+1] == '1')
				res+="T";
			else if(s[i] == '1' && s[i+1] == '0')
				res+="C";
			else
				res+="G";
		}
		cout<<res<<endl;
	}

	return 0;
}