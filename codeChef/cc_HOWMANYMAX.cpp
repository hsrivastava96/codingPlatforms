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

		int arr[n-1], z = 0, o = 0, oflag = 0, zflag = 0, count = 0;
		char temp = '2';
		for(int i = 0; i < n-1; i++)
		{
			char val;
			cin>>val;
			arr[i] = val;

			if(val == '1')
			{
				if(temp == '0' || temp == '2')
					count++;
			}
			temp = val;
		}
		if(n == 2)
			cout<<1<<endl;
		else
		{
    		if(temp == '0')
    		    count++;
			cout<<count<<endl;
		}
	}

	return 0;
}