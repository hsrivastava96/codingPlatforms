#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, sum = 1;
	    cin>>n;
	    
        int val, prev = 0;
        cin>>val;
        prev = val;
	    for(int i = 1; i < n; i++)
	    {
	        cin>>val;
            if(val != prev)
                sum++;
            
            prev = val;
	    }
	    
    	cout<<sum<<endl;   
	}
	return 0;
}
