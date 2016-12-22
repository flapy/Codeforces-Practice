#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	int t;
	t=1;
	while(t--)
	{
		lli n,m;
		cin>>n>>m;
		pair<lli,lli> p[m+2];
		for(int i=0;i<m;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		long long int ans=n*n;
		map<lli,lli> mRow;
		map<lli,lli> mCol;
		for(int i=0;i<m;i++)
		{
			mRow[p[i].first]=mCol[p[i].second]=true;
			ans=(n*n)-(mRow.size()*n+((n-mRow.size())*mCol.size()));
			cout<<ans<<" ";
		}
		cout<<endl;
	}
}