#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x, y, sum = 0;
	    cin>>x>>y;
	    
	    if(y % 2 == 0)
	    {
    	    if(x < y/2)
    	        sum = 1500 - x*2 - (x + y)*4;
            else
                sum = 1500 - y*4 - (x + y)*2;
	    }
	    else
	    {
	        if(x < (y+1)/2)
    	        sum = 1500 - x*2 - (x + y)*4;
            else
                sum = 1500 - y*4 - (x + y)*2;
	    }
        cout<<sum<<endl;
	}
	return 0;
}
