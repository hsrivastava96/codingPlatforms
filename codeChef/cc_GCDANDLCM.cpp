#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void pairSum(int ind, int n, vector<int> arr, vector<int> ds, int size, int &count)
{
	if(size == 2)
	{
		int a = ds[0], b = ds[1];
		int hcf = gcd(a, b);
		int lcm = (a*b)/hcf;
		int sum = (a*a) + (b*b) + (hcf*hcf) + (lcm*lcm);
		if(sum == n)
			count++;
	}
	else if(ind == n)
		return;
	else
	{
		// include
		ds.push_back(arr[ind]);
		size++;
		pairSum(ind, n, arr, ds, size, count);

	 	// exclude
	 	ds.pop_back();
	 	size--;
	 	pairSum(ind+1, n, arr, ds, size, count); 
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		vector<int> arr, ds;
		int count;
		cin>>n;
		for(int i = 1; i <= n; i++)
			arr.push_back(i);
		pairSum(0, n, arr, ds, 0, count);
		cout<<count<<endl;
	}

	return 0;
}