#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	int soln[t];
	for(int i = 0; i < t; i++)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int j = 0; j < n; j++)
		{
			int val;
			cin>>val;
			arr[j] = val;
		}

		int flag = 0;
		for(int j = 0; j < n-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				for(int k = 0; k < n-1; k++)
				{
					if(arr[k] > arr[k+1])
						flag = 1;
				}
				break;
			}
		}
		if(flag == 1)
			soln[i] = 0;
		else
			soln[i] = 1;
	}


	for(int i = 0; i < t; i++)
	{
		if(soln[i] == 0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	return 0;
}