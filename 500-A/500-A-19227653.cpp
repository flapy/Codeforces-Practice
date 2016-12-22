#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;
	cin>>n>>k;
	int a[n+2];
	for(int i=1;i<n;i++)
		cin>>a[i];
	for(int i=1;i<=n;)
	{
		if(i==k)
		{
			cout<<"YES\n";
			return 0;
		}
		if(i==n)
		break;
		if(i<n)
		i+=a[i];
	}
	cout<<"NO\n";
	return 0;
}