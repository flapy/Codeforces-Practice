#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[m+2];
	for(int i=0;i<=m;i++)
		cin>>a[i];
	int arr[n+2];
	for(int i=0;i<n;i++)
	{
		arr[i]=a[m]&(1<<i);
	}
	///0010011100001101
	int temp[n+2];
	int ans=0;
	for(int i=0;i<m;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			temp[j]=a[i]&(1<<j);
		}
		int t=0;
		for(int j=0;j<n;j++)
		{
			if(temp[j]!=arr[j])
				t++;
		}
		if(t<=k)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}