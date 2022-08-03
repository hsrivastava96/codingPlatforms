#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	int s[t];
	
	for(int i = 0; i < t; i++)
	{
	    int n, k;
	    cin>>n;
	    cin>>k;
	    
	    if(k == 0)
	    {
	        if(n == 0)
	            s[i] = 0;
            else if(n % 4 == 0)
                s[i] = 0;
            else
                s[i] = 1;
	    }
	    else
	    {
	        if(n == 0)
	            s[i] = 1;
            else if(n % 4 == 0)
                s[i] = 1;
            else
                s[i] = -1;
	    }
	}
	
	for(int i = 0; i < t; i++)
	{
	    if(s[i] == 0)
	        cout<<"Off"<<endl;
        else if(s[i] == 1)
            cout<<"On"<<endl;
        else
            cout<<"Ambiguous"<<endl;
	}
	
	return 0;
}
