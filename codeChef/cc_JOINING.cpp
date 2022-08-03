#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, k;
		cin>>n>>k;

        int q = n/5, r = n%5, total = 0, gK = 0;

        if(r > 0)
            total = q + 1;
        else
            total = q;

        if(k%5 > 0)
            gK = k/5 + 1;
        else
            gK = k/5;
        cout<<(total - gK)<<endl;
        // how to find k lies in which group??
	}

	return 0;
}