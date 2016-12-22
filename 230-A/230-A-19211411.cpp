#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	pair<int,int> p[n+2];
	int x,y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		p[i]=make_pair(x,y);
	}
	bool flag[1003]={false};
	for(int i=0;i<n;i++)
	{
		int st=INT_MIN;
		bool temp=false;
		int pos;
		for(int j=0;j<n;j++)
		{
			if(p[j].first<s && !flag[j])
			{
				if(st<p[j].second)
				{
					temp=true;
					st=p[j].second;
					pos=j;
				}
			}
		}
		if(temp)
		{
			flag[pos]=true;
			s+=p[pos].second;
		}
		else
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}