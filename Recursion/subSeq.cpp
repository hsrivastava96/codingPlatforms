#include <bits/stdc++.h>
using namespace std;

// Case 1: Print all subsequences
void subSeq_all(int i, vector<int> v, vector<int> a, int n)
{
    if(i == n)
    {
        int l = size(v);
        for(int j = 0; j < l; j++)
            cout<<v[j]<<"\t";
        cout<<endl;
        return;
    }
    // Inclusion case, include the current index value
    v.push_back(a[i]);
    subSeq_all(i+1, v, a, n);

    // This is the exclusion case, do not push anything in vector and increase the index
    v.pop_back();
    subSeq_all(i+1, v, a, n);

}

// Case 2: Print all subsequences with sum == k
void subSeq_all_Sum(int i, vector<int> v, vector<int> a, int n, int sum, int k)
{
    if(i == n)
    {
        if(sum == k)
        {
            for(auto it : v)            
                cout<<it<<"\t";
            cout<<endl;
        }
        return;
    }
    else
    {

        // Inclusion case, include the current index value
        sum+=a[i];
        v.push_back(a[i]);
        subSeq_all_Sum(i+1, v, a, n, sum, k);

        // This is the exclusion case, do not push anything in vector and increase the index
        sum-=a[i];
        v.pop_back();
        subSeq_all_Sum(i+1, v, a, n, sum, k);
    }
}

// Case 3: Print first occurence of subsequence with sum == k
int subSeq_f_Sum(int i, vector<int> v, vector<int> a, int n, int sum, int k)
{
    if(i == n)
    {
        if(sum == k)
        {
            for(auto it : v)            
                cout<<it<<"\t";
            cout<<endl;
            return 1;
        }
        return 0;
    }
    else
    {
        // Inclusion case, include the current index value
        sum+=a[i];
        v.push_back(a[i]);
        if(subSeq_f_Sum(i+1, v, a, n, sum, k))
            return 1;

        // This is the exclusion case, do not push anything in vector and increase the index
        sum-=a[i];
        v.pop_back();
        if(subSeq_f_Sum(i+1, v, a, n, sum, k))
            return 1;


        return 0;
    }
}

// Case 4: Print count of subsequences with sum == k
int subSeq_count_Sum(int i, vector<int> a, int n, int sum, int k)
{
    if(i == n)
    {
        if(sum == k)
            return 1;
        return 0;
    }
    else
    {

        // Inclusion case, include the current index value
        sum+=a[i];
        int inc = subSeq_count_Sum(i+1, a, n, sum, k);

        // This is the exclusion case, do not push anything in vector and increase the index
        sum-=a[i];
        int exc = subSeq_count_Sum(i+1, a, n, sum, k);

        return inc + exc;
    }
}

int main() 
{
    // your code goes here
    
    int n;
    cin>>n;
    
    vector<int> arr;
    vector<int> vc;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    
    cout<<subSeq_count_Sum(0, arr, n, 0, 5);
    return 0;
}
