#include<bits/stdc++.h>
using namespace std;
int dp[1003][1002];
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	string s[1004];
	int cnt=0;
	pair<int,int> p[1000004];
	int k=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		int len=s[i].length();
		for(int j=0;j<len;j++)
		{
			if(s[i][j]=='*')
			{
				p[k++]={i,j};
			}
		}
	}
	int tot=k;
	if(tot>n+m-1)
	{
		cout<<"NO\n";
		return 0;
	}

	map<int,int> mRow;
	map<int,int> mCol;
	for(int i=0;i<k;i++)
	{
		int x=p[i].first;
		int y=p[i].second;
		if(!mRow[x])
		{
			int cnt=0;
			for(int j=0;j<m;j++)
			{
				if(s[x][j]=='*')
					cnt++;
			}
			mRow[x]=cnt;
		}
		if(!mCol[y])
		{
			int cnt=0;
			for(int j=0;j<n;j++)
			{
				if(s[j][y]=='*')
					cnt++;
			}
			mCol[y]=cnt;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			dp[i][j]=mRow[i]+mCol[j];
			if(s[i][j]=='*')
			--dp[i][j];
			if(dp[i][j]==tot)
			{
				cout<<"YES\n";
				cout<<i+1<<" "<<j+1<<endl;
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}