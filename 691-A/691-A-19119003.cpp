#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n==1)
	{
		if(a[0]==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
	{
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			cnt=cnt+(a[i]!=0?0:1);
		}
		if(cnt==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}