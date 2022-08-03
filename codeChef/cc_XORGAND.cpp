#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	vector<vector<int>> soln;

	for(int i = 0; i < t; i++)
	{
		int n, m, l, r, x;
		cin>>n;

		vector<int> v;
		for(int j = 0; j < n; j++)
		{
			cin>>m;
			v.push_back(m);
		}

		cin>>m;
		vector<int> c;
		for(int j = 0; j < m; j++)
		{
			cin>>l>>r>>x;
			int count = 0;
			
// 			cout<<"l, r, x --> "<<l<<",\t"<<r<<",\t"<<x<<endl;
			for(int k = l - 1; k < r; k++)
			{
			    cout<<"v[k] --> "<<v[k]<<"\tx --> "<<x<<"\tk --> "<<k<<endl;
			    cout<<"(v[k]^x) --> "<<(v[k]^x)<<"\t(v[k]&x) --> "<<(v[k]&x)<<endl;
				if((v[k]^x) > (v[k]&x))
					count++;
			}
			cout<<"Count --> "<<count<<endl;
			c.push_back(count);
		}
		soln.push_back(c);
	}
	
// 	for(int i = 0; i < t; i++)
// 	{
// 		for(int j = 0; j < soln[i].size(); j++)
// 			cout<<soln[i][j]<<endl;
// 	}

	return 0;
}