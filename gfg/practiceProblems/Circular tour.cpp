// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    /*
        Algo:

        Run through the entire array
        If current petrol amount is < distance to be travelled next 
        Then set current petrol to be 0 and starting point to be next index

        Now,
        If after this loop if current petrol is = 0
        That means last index's next could not be travelled

        so it's next, i.e. first index can't be beginning
        so, in this case truck can't travel all

        But, if after travelling, if if we have petrol
        then we need to check that from start to current starting point, can we travel?
        starting with current petrol left

        if while travelling even for once if petrol gets to < 0
        we say we can't travel

        otherwise if we do then we say current starting point is our answer 
    */
    int tour(petrolPump p[],int n)
    {
       //Your code here
       
       // Calculate distance of each from each
       int cP = 0, s = 0;
       for(int i = 0; i < n; i++)
       {
            cP+=p[i].petrol - p[i].distance;
            if(cP < 0)
            {
                cP = 0;
                s = i+1;
            }
       }
       if(cP == 0)
            return -1;
        else
        {
            for(int i = 0; i < s; i++)
            {
                cP+=p[i].petrol - p[i].distance;
                if(cP < 0)
                    return -1;
            }
            return s;
        }
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends