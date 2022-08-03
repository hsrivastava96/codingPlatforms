#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		int n, k;
        cin>>n>>k;

        if(n%2 == 0)
        	cout<<"Yes"<<endl;
        else
        {
        	if(k == 1)
	        	cout<<"Yes"<<endl;
	        else
	        	cout<<"No"<<endl;
        }
	}

	return 0;
}