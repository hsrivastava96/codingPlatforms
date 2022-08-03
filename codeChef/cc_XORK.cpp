#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, k, gFlag = 0, min = 99999;
		cin>>n>>k;

		vector<int> arr;
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			arr.push_back(val);
		}

		for(int i = 0; i < n-1; i++)
		{
			int x = arr[i], l = 0;
			if(x >= k)
			{
				l = 1;
				if(l < min)
					min = l;
				gFlag = 1;
			}

			for(int j = i+1; j < n; j++)
			{
				x = x ^ arr[j];
				if(x >= k)
				{
					l = j - i + 1;
					if(l < min)
						min = l;
					gFlag = 1;
				}
			}
		}
		if(gFlag == 1)
			cout<<min<<endl;
		else
			cout<<"-1"<<endl;
	}

	return 0;
}