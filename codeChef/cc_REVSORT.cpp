#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, x;
		cin>>n>>x;

		vector<int> arr;
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			arr.push_back(val);
		}

		int flag = 0;
		for(int i = 0 ; i < n-1 && flag == 0; i++)
		{
			int sum = arr[i], right = i;
			vector<int> ds;
			ds.push_back(arr[i]);
			for(int j = i+1; j < n && flag == 0; j++)
			{
				sum+=arr[j];
				if(sum <= x)
				{
					ds.push_back(arr[j]);
					right = j;

					int flag1 = 0, flag2 = 0;
					for(int l = 1; l < i && flag1 == 0; l++)
					{
						if(arr[l] < arr[l-1])
							flag1 = 1;
					}
					for(int r = j+1; r < n-1 && flag2 == 0; r++)
					{
						if(arr[r] > arr[r+1])
							flag2 = 1;
					}
					if(flag1 == 0 && flag2 == 0)
					{
						cout<<"YES"<<endl;
						flag = 1;
						break;
					}
				}
				else
					break;
			}
		}
		if(flag == 0)
			cout<<"NO"<<endl;
	}

	return 0;
}