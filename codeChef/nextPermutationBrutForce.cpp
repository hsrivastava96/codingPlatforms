#include<bits/stdc++.h>
using namespace std;

void perm(int count, vector<int> choose, vector<int> ds, int n, vector<int> given, int &flag)
{
    if(count == n)
    {
        if(flag == 1)
        {
            for(auto it:ds)
                cout<<it<<" ";
            cout<<endl;
            flag = 0;
        }
        else
        {
            int tempFlag = 0;
            for(int i = 0; i < n; i++)
            {
                if(ds[i] != given[i])
                    tempFlag = 1;
            }
            if(tempFlag == 0)
            {
                flag = 1;
                // found: given
                cout<<"Given --> "<<endl;
                for(auto it:given)
                    cout<<it<<" ";
                cout<<endl;
                cout<<"Found DS --> "<<endl;
                for(auto it:ds)
                    cout<<it<<" ";
                cout<<endl;
            }
        }
    }
    else
    {
        for(int i = 1; i < cSize; i++)
        {
            if(choose[i] != choose[i-1])
            {
                currElem = choose[i];
                ds.push_back(currElem);
                vector<int> temp;
                for(int j = 0; j < cSize; j++)
                {
                    if(j != i)
                        temp.push_back(choose[j]);
                }
                perm(count+1, temp, ds, n);
                ds.pop_back();
            }
        }
    }
}

int main()
{
    vector<int> v, ds, given, map;
    for(int i = 0; i < 3; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
        given.push_back(val);
        map.push_back(0);
    }

    int flag = 0;
    for(int i = 1; i < 3; i++)
    {
        if(v[i] > v[i-1])
            flag = 1;
    }
    sort(v.begin(), v.end());

    if(flag == 1)
    {
        flag = 0;
        perm(0, v, ds, 3, given, flag);
    }
    else
    {
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}

