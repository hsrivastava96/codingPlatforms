#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			arr[i] = val;
		}

		int l = 0, r = n-1, dl = 0, dr = 0, count = 0;
		for(int i = 0; i < n-1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(arr[i] == arr[j])
				{
					dl = i - l;
					dr = r - j;
					if(dl <= dr)
					{
						l+=dl+1;
						r+=dl+1;
						count+=dl;
					}
					else
					{
						l-=dr;
						r-=dr;
						count+=dr;
					}
				}
			}
		}
		cout<<count*2<<endl;
	}

	return 0;
}