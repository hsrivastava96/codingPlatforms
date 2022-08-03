#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getPossibles(int x, int y)
{
	vector<vector<int>> retVec;	
	vector<int> v;
	if(x-2 >= 1)
	{
		if(y-1 >= 1)
		{
			v.push_back(x-2);
			v.push_back(y-1);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
		if(y+1 <= 8)
		{
			v.push_back(x-2);
			v.push_back(y+1);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
	}
	if(x+2 <= 8)
	{
		if(y-1 >= 1)
		{
			v.push_back(x+2);
			v.push_back(y-1);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
		if(y+1 <= 8)
		{
			v.push_back(x+2);
			v.push_back(y+1);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
	}
	if(x-1 >= 1)
	{
		if(y-2 >= 1)
		{
			v.push_back(x-1);
			v.push_back(y-2);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
		if(y+2 <= 8)
		{
			v.push_back(x-1);
			v.push_back(y+2);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
	}
	if(x+1 <= 8)
	{
		if(y-2 >= 1)
		{
			v.push_back(x+1);
			v.push_back(y-2);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
		if(y+2 <= 8)
		{
			v.push_back(x+1);
			v.push_back(y+2);
			retVec.push_back(v);
			v.pop_back();			
			v.pop_back();			
		}
	}
	return retVec;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{	
		int x1, y1, x2, y2;
		cin>>x1>>y1;
		cin>>x2>>y2;

		vector<vector<int>> p1, p2;

		p1 = getPossibles(x1, y1);
		p2 = getPossibles(x2, y2);

		int flag = 0;
		for(auto it:p1)
		{
			int x = it[0], y = it[1];
			for(auto it2:p2)
			{
				int x_ = it2[0], y_ = it2[1];
				if(x == x_ && y == y_)
				{
					flag = 1;
					cout<<"YES"<<endl;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 0)
			cout<<"NO"<<endl;
	}

	return 0;
}