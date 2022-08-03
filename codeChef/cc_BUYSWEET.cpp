// #include<bits/stdc++.h>
// using namespace std;

// int sweets(vector<int> a, vector<int> b, int n, int r, int c)
// {
// 	cout<<pA<<endl<<pB<<endl<<n<<endl<<r<<endl<<c;
// 	vector<int> pA, pB;
// 	int pC = 0, max = -999, ind = -1, nNew = 0;
// 	for(int i = 0; i < n; i++)
// 	{
// 		if(a[i] <= r)
// 		{
// 			pA.push_back(a[i]);
// 			pB.push_back(b[i]);
// 			nNew++;

// 			if(b[i] > max)
// 			{
// 				max = b[i];
// 				ind = i;
// 			}
// 			else if(b[i] == max)
// 			{
// 				if(a[ind] > a[i])
// 				{
// 					max = b[i];
// 					ind = i;
// 				}	
// 			}
// 		}
// 	}
// 	if(nNew != 0)
// 	{
// 		while(r >= a[ind])
// 		{
// 			pC++;
// 			r = r - a[ind] + b[ind];
// 		}
// 		c = sweets(pA, pB, nNew, r, pC);
// 	}
// 	return c;
// }

// int main()
// {
// 	int t;
// 	cin>>t;

// 	int soln[t];

// 	for(int i = 0; i < t; i++)
// 	{
// 		int n, r;
// 		cin>>n>>r;
// 		vector<int> a, b;
// 		for(int j = 0; j < n; j++)
// 		{
// 			int val;
// 			cin>>val;
// 			a.push_back(val);
// 		}
// 		for(int j = 0; j < n; j++)
// 		{
// 			int val;
// 			cin>>val;
// 			b.push_back(val);
// 		}
// 		soln[i] = sweets(a, b, n, r, 0);
// 	}
	
// 	// for(int i = 0; i < t; i++)
// 	// 	cout<<soln[i]<<endl;
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	int soln[t];

	for(int i = 0; i < t; i++)
	{
		int n, r, nL = 0, c = 0;
		cin>>n>>r;
		int a[n], b[n];
		vector<int> pA, pB, pE;
		vector<pair<int, int>> pAr;

		for(int j = 0; j < n; j++)
			cin<<a[j];
		for(int j = 0; j < n; j++)
			cin<<b[j];

		for(int j = 0; j < n; j++)
		{
			if(r >= a[j])
			{
				pA.push_back(a[j]);
				pB.push_back(b[j]);
				pE.push_back(a[j] - b[j]);
				pAr.push_back({a[j] - b[j], a[j]});
				nL++;
			}
		}

		sort(pAr.begin(), pAr.end());
		for(int j = 0; j < nL; j++)
		{
			int df = pAr[j].first, oVal = pAr[j].second, cb = oVal - df;

			r-=oVal;
			c+=1;
			c+=r/df;
			r = r%df + cb;
		}
		soln[i] = c;

	}
	
	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}