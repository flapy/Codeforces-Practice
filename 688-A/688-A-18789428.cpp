#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	string s[104];
	for(int i=0;i<d;i++)
	{
		cin>>s[i];
	}
	int ans=0;
	int cnt=0;
	for(int i=0;i<d;i++)
	{
		bool flag=false;
		for(int j=0;j<n;j++)
		{
			if(s[i][j]=='0')
			{
				flag=true;
				cnt++;
				break;
			}
		}
		if(flag)
		{
			ans=max(ans,cnt);
		}
		else
		{
			cnt=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}