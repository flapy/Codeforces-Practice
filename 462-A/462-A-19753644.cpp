#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s[n+2];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int cnt=0;
			if(i+1<n && s[i+1][j]=='o')
				cnt++;
			if(i-1>=0 && s[i-1][j]=='o')
				cnt++;
			if(j-1>=0 && s[i][j-1]=='o')
				cnt++;
			if(j+1<n && s[i][j+1]=='o')
				cnt++;
			if(cnt%2!=0)
			{
				cout<<"NO\n";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	return 0;
}