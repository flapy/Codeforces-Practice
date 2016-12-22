#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int cnt=0;
			for(int st=i;st<=j;st++)
			{
				if(a[st]==0)
					cnt++;
			}
			for(int k=i-1;k>=0;k--)
				if(a[k]==1)
					cnt++;
			for(int k=j+1;k<n;k++)
				if(a[k]==1)
					cnt++;
			ans=max(ans,cnt);
		}
	}
	cout<<ans<<endl;
	return 0;
}