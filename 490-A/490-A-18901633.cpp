#include<bits/stdc++.h>
using namespace std;
	int arr[5004][5005];
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	map<int,list<int> > m;
	for(int i=0;i<n;i++)
	{
		m[a[i]].push_back(i);
	}
	if(m[1].size()==0 || m[2].size()==0 || m[3].size()==0)
	{
		cout<<0<<endl;
		return 0;
	}
	int ans=min(m[1].size(),min(m[2].size(),m[3].size()));
	int ind=0;
	if(ans==m[1].size())
		ind=1;
	else if(ans==m[2].size())
		ind=2;
	else
		ind=3;
	cout<<ans<<endl;
	list<int> ::iterator itr;
	int row=0;
	for(itr=m[ind].begin();itr!=m[ind].end();itr++)
	{
		arr[row++][0]=*itr;
	}	
	int cnt=row;
	int next=ind+1;
	if(next==4)
		next=1;
	row=0;
	for(itr=m[next].begin();itr!=m[next].end();itr++)
	{
		arr[row++][1]=*itr;
		if(row==cnt)
			break;
	}
	row=0;
	int prev=ind-1;
	if(prev==0)
		prev=3;
	for(itr=m[prev].begin();itr!=m[prev].end();itr++)
	{
		arr[row++][2]=*itr;
		if(row==cnt)
			break;
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<3;j++)
			cout<<arr[i][j]+1<<" ";
		cout<<endl;
	}
	return 0;
}