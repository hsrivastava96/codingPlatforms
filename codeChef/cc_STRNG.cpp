#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool checkPrime(long long int n)
{
    if(n == 1)
        return false;
    else if(n == 2 || n == 3)
        return true;
    else if(n%2 == 0 || n%3 == 0)
        return false;
    else
    {
        if((n-1)%6 == 0)
            return true;
        else if((n+1)%6 == 0)
            return true;
        return false;
    }
}

int countPrime(unordered_set<int> &s)
{
	int count = 0;
	for(auto it:s)
	{
		if(checkPrime(it))
			count++;
	}
	return count;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		unordered_set<int> s;
		for(int i = 0; i < n; i++)
		{
			int val;
			cin>>val;
			s.insert(val);
		}

		if(n == 2)
			cout<<"2"<<endl;
		else if(countPrime(s) > 2)
			cout<<"0"<<endl;
		else
			cout<<n<<endl;

	}
}