#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
		{
			int d1=s1[i]-48;
			int d2=s2[i]-48;
			int ans1,ans2;
			int cnt=0;
			for(int j=d1;;)
			{
				cnt++;
				j++;
				if(j==10)
					j=0;
				if(j==d2)
				{
					ans1=cnt;
					break;
				}
			}
			cnt=0;
			for(int j=d1;;)
			{
				cnt++;
				j--;
				if(j==-1)
					j=9;
				if(j==d2)
				{
					ans2=cnt;
					break;
				}
				if(j==d1)
					break;
			}
			ans+=min(ans1,ans2);
		}
	}
	cout<<ans<<endl;
	return 0;
}