#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int h1 = 0, h2 = 0, h3 = 0;
        if(n%3 == 0)
        {
            h2 = n/3;
            h1 = h2+1;
            h3 = h2-1;
        }
        else if(n%3 == 1)
        {
            h2 = n/3;
            h1 = h2+2;
            h3 = h2-1;
        }
        else
        {
            h2 = n/3;
            h1 = h2+2;
            h3 = h2-1;
            h2 = h2+1;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
    return 0;
}