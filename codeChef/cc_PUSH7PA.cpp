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

		vector<int> arr;
		for(int j = 0; j < n; j++)
		{
			int val;
			cin>>val;
			arr.push_back(val);
		}

		sort(arr.begin(), arr.end());

		int j = n-1, cv = arr[j], cvf = 0, maxV = 0, cval = 0;
		while(j >= 0)
		{
		    if(arr[j] == cv)
		    {
		        cvf++;
		        if(j == 0)
		        {
    	            cval = cv + cvf - 1;
    	            if(maxV < cval)
    	                maxV = cval;
                    cv = arr[j];
                    cvf = 1;
		        }
		    }
	        else
	        {
	            cval = cv + cvf - 1;
	            if(maxV < cval)
	                maxV = cval;
                cv = arr[j];
                cvf = 1;
	        }
		    j--;
		}

		soln[i] = maxV;
	}
	
	for(int i = 0; i < t; i++)
		cout<<soln[i]<<endl;
	return 0;
}