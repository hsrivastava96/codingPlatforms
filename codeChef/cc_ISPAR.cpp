#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		long long int n, k;
        cin>>n>>k;

        if(k == 1)
        {
        	if(n%2 == 0)
	        	cout<<"Even"<<endl;
	        else
	        	cout<<"Odd"<<endl;
        }
        else if(k == 2)
        	cout<<"Odd"<<endl;
        else
        	cout<<"Even"<<endl;
        	
    // 	cout<<n<<" "<<k<<endl;
	}

	return 0;
}