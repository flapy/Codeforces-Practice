#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	pair<int,int> p[34];
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(p[i].first==p[j].second)
				{
					cnt++;
				}
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}