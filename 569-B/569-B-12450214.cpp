#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base:: sync_with_stdio(false);
	int n;
	cin>>n;
	int a[100005];
	map<int,int> ma;
	int j=0;
	set<int> s;
	set<int> extra;
	
	set<int> pos;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(s.find(a[i])!=s.end())
		{
			pos.insert(i);
		}
		else
		s.insert(a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(s.find(i)==s.end())
		extra.insert(i);
	}
	set<int> :: iterator itr;
	itr=extra.begin();
	for(int i=0;i<n;i++)
	{
		if(a[i]>n)
		{
			a[i]=*extra.begin();
			if(pos.find(i)!=pos.end());
			pos.erase(i);
			extra.erase(extra.begin());
		}
	}
	itr=extra.begin();
	set<int>:: iterator p;
	p=pos.begin();
	for(;p!=pos.end() && itr!=extra.end();)
	{
		a[*p]=*itr;
		itr++;
		p++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	printf("\n");
	return 0;
}