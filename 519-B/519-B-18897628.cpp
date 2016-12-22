#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2],b[n+2],c[n+2];
	map<int,int> m1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m1[a[i]]++;
	}
	map<int,int> m;
	for(int i=0;i<n-1;i++)
	{
		cin>>b[i];
		m[b[i]]++;
	}
	map<int,int> ::iterator itr;
	for(itr=m1.begin();itr!=m1.end();itr++)
	{
		if(itr->second!=m[itr->first])
		{
			m1[itr->first]--;
			cout<<itr->first<<endl;
		}
	}
	m.clear();
	for(int i=0;i<n-2;i++)
	{
		cin>>c[i];
		m[c[i]]++;
	}
	for(itr=m1.begin();itr!=m1.end();itr++)
	{
		if(itr->second!=m[itr->first])
		{
			cout<<itr->first<<endl;
		}
	}
	return 0;
}