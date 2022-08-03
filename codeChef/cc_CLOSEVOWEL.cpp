// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	// your code goes here
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n, total = 1;
// 	    cin>>n;
	    
// 	    string s;
// 	    cin>>s;
// 	    for(int i = 0; i < s.length(); i++)
// 	    {
// 	        if(s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
// 	            total = (total * 2) % (1000000007);
// 	    }
// 	    cout<<total<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n, total = 1;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    for(int i = 0; i < s.length(); i++)
	    {
			int curChar = s[i];
	    	if(curChar >= 97 && curChar <=101)
	    	{
				if(curChar == 97 || curChar == 101)
					total*=1;
				else
				{
					if(curChar - 97 == 101 - curChar)
						total = (total * 2)%(1000000007);
					else
						total*=1;
				}
	    	}
	    	else if(curChar >= 101 && curChar <=105)
	    	{
				if(curChar == 101 || curChar == 105)
					total*=1;
				else
				{
					if(curChar - 101 == 105 - curChar)
						total = (total * 2)%(1000000007);
					else
						total*=1;
				}
	    	}
	    	else if(curChar >= 105 && curChar <=111)
	    	{
				if(curChar == 105 || curChar == 111)
					total*=1;
				else
				{
					if(curChar - 105 == 111 - curChar)
						total = (total * 2)%(1000000007);
					else
						total*=1;
				}
	    	}
	    	else if(curChar >= 111 && curChar <=117)
	    	{
				if(curChar == 111 || curChar == 117)	
					total*=1;
				else
				{
					if(curChar - 111 == 117 - curChar)
						total = (total * 2)%(1000000007);
					else
						total*=1;
				}
	    	}
	    }
	    cout<<total<<endl;
	}
	return 0;
}
