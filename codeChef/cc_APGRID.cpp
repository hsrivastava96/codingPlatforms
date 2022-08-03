#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int r, c;
		cin>>r>>c;

		int arr[r][c];
		for(int i = 1, iniVal = 1; i <= r; i++, iniVal+=2)
		{
			for(int j = 1; j <= c; j++)
				arr[i-1][j-1] = iniVal*j;
		}

		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
	}

	return 0;
}
