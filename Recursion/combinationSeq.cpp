#include<bits/stdc++.h>
using namespace std;

void comSeq(int i, vector<int> v, vector<int> a, int n, int sum, int k, set<vector<int>> &s)
{
	if(sum > k) return;

	if(sum == k) 
	{	
		s.insert(v);
		return;
	}

	if(i == n)
		return;
	else
	{
		// pick current index
		sum+=a[i];
		v.push_back(a[i]);
		comSeq(i+1, v, a, n, sum, k, s);

		// not pick current index
		sum-=a[i];
		v.pop_back();
		comSeq(i+1, v, a, n, sum, k, s);
	}
}

void comSeqOptimised(int i, vector<int> v, vector<int> a, int n, int sum, int k, vector<vector<int>> &s)
{
	if(sum > k) return;

	if(sum == k) 
	{	
		s.push_back(v);
		return;
	}

	if(i == n)
		return;
	else
	{
		// pick unique indixes
		for(int j = i; j < n; j++)
		{
		    if(j > i)
		    {
		        if(a[j] != a[j-1])
		        {
    				sum-=a[j-1];
    				v.pop_back();
    				sum+=a[j];
    				v.push_back(a[j]);
    				comSeqOptimised(j+1, v, a, n, sum, k, s);
		        }
		    }
	        else if(j == i)
	        {
				sum+=a[j];
				v.push_back(a[j]);
				comSeqOptimised(j+1, v, a, n, sum, k, s);
	        }
		}
	}
}

int main()
{
	int n;
	cin>>n;

	vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		int val;
		cin>>val;
		arr.push_back(val);
	}

	sort(arr.begin(), arr.end());

	set<vector<int>> s;
	vector<int> v;
	vector<vector<int>> s1;
	// comSeq(0, v, arr, n, 0, 4, s);
	comSeqOptimised(0, v, arr, n, 0, 4, s1);
	for(auto li:s1)
	{
	    for(auto val:li)
	        cout<<val<<" ";
        cout<<endl;
	}
	return 0;
}