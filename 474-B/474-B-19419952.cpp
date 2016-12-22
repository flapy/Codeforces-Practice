#include <bits/stdc++.h>
using namespace std;
int binSearch(pair<int,int> p[],int n,int ele)
{
	int lo=0;
	int hi=n-1;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;
		pair<int,int> temp=p[mid];
		if(p[mid].first <=ele && p[mid].second>=ele)
		{
			return mid+1;
		}
		if(p[mid].first>ele)
		{
			hi=mid-1;
		}
		else
			lo=mid+1;
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	pair<int,int> p[n+2];
	p[0]={1,a[0]};
	//cout<<p[0].first<<" "<<p[0].second<<endl;
	for(int i=1;i<n;i++)
	{
		p[i]={p[i-1].second+1,a[i]+p[i-1].second};
		//cout<<p[i].first<<" "<<p[i].second<<endl;
	}
	int m;
	cin>>m;
	while(m--)
	{
		int q;
		cin>>q;
		cout<<binSearch(p,n,q)<<endl;
	}
	return 0;
}