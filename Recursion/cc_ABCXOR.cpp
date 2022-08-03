#include<bits/stdc++.h>
using namespace std;

void ordTrip(int ind, vector<int> arr, vector<int> ds, int count, int k, int n, int &oTrip, int &trip)
{
	if(count == 3)
	{
// 		cout<<ds[0]<<" "<<ds[1]<<" "<<ds[2]<<endl;
		int val = (ds[0] ^ ds[1]) ^ ds[2];
		if(val == k)
		    oTrip++;
	    trip++;
	}
    else if(ind == n)
    {
	   // cout<<"coming in here! count --> "<<count<<endl;
    	if(count == 3)
    	{
    // 		cout<<ds[0]<<" "<<ds[1]<<" "<<ds[2]<<endl;
    		int val = (ds[0] ^ ds[1]) ^ ds[2];
    		if(val == k)
    		    oTrip++;
		    trip++;
    	}
    }
	else
	{
		// select
		ds.push_back(arr[ind]);
		ordTrip(ind+1, arr, ds, count+1, k, n, oTrip, trip);

		// not select
		ds.pop_back();
		ordTrip(ind+1, arr, ds, count, k, n, oTrip, trip);

	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, k;
		cin>>n>>k;
		vector<int> arr, ds;
        
        long long int two = 1;
		for(int i = 1; i <= n; i++)
			two*=2;
		cout<<"2^n --> "<<two<<endl;
		for(int i = 0; i< two; i++)
		    arr.push_back(i);

		int sum = 0, trip = 0;
		ordTrip(0, arr, ds, 0, k, two, sum, trip);
		cout<<sum*6<<" "<<trip<<endl;
	}

	return 0;
}