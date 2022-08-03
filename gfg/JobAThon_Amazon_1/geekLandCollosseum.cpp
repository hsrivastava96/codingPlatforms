// { Driver Code Starts
//Initial Template for C++


/*
    Algo:
    Here, we make use of min heap and max heap (descending order priority queue and ascending order priority queue)
    
    Using min heap we fill suffix array with sum of smallest N elements till the suffix index point from end

    Using max heap we fill prefix array with sum of largest N elements till the prefix index point from beginning

    Then, start finding difference of prefix and suffix for a given ith  division and update maximum value

    return max
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    
    long long colosseum(int N,vector<int> A) 
    {
        long long sum = 0, divider = N-1, max = INT_MIN, diff = 0;
        
        long long pref[3*N], suff[3*N], pInd = 0, sInd = 0, n = 3*N;
        
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        priority_queue<long> pq2;
                
        for(long long i = 0; i < n; i++)
        {
            if(pq.size() == N)
            {
                if(A[i] > pq.top())
                {
                    sum-=pq.top();
                    pq.pop();
                    sum+=A[i];
                    pq.push(A[i]);
                }
            }
            if(pq.size() < N)
            {
                sum+=A[i];
                pq.push(A[i]);
            }
            pref[i] = sum;
        }
        
        sum = 0;
        
        for(long long i = n-1; i >= 0; i--)
        {
            if(pq2.size() == N)
            {
                if(A[i] < pq2.top())
                {
                    sum-=pq2.top();
                    pq2.pop();
                    sum+=A[i];
                    pq2.push(A[i]);
                }
            }
            if(pq2.size() < N)
            {
                sum+=A[i];
                pq2.push(A[i]);
            }
            suff[i] = sum;
        }
        
        // for(int i = 0; i < n; i++)
        //     cout<<pref[i]<<"\t"<<suff[i]<<endl;

        for(long long i = N-1; i < n-N; i++)
        {
            diff = pref[i] - suff[i+1];
            if(diff > max)
                max = diff;
        }
        return max;
   }
};


/*
    {1, 1, 5, 3, 7, 7}
    pair 1 -> N, Pair 2 -> 2NCN (Such that S1 - S2 is max)
    {1,1} -> 

*/

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        Solution obj;
        int n;
        cin>>n;
        vector<int> a(3*n);
         for (int i = 0; i <3*n; ++i){
            cin>>a[i];
        }
        cout << obj.colosseum(n,a) <<"\n";
    }
    return 0;
}
  // } Driver Code Ends