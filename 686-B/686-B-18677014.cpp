#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[102];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	bool flag=true;
	for(int i=2;i<=n;i++)
	{
		if(a[i]<a[i-1])
		{
			flag=false;
			break;
		}
	}
	if(flag)
		return 0;
	int val=n;
	while(1)
	{
		int ans=INT_MIN;
		int pos;
		for(int i=1;i<=val;i++)
		{
			if(a[i]>ans)
			{
				pos=i;
				ans=a[i];
			}
		}
		for(int i=pos;i<val;i++)
		{
			cout<<i<<" "<<i+1<<endl;
			swap(a[i],a[i+1]);
		}
		bool flag=true;
		for(int i=2;i<=n;i++)
		{
			if(a[i]<a[i-1])
			{
				flag=false;
				break;
			}
		}
		if(flag)
			break;
		val--;
		if(val==0)
			break;
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<a[i]<<" ";
	return 0;
}