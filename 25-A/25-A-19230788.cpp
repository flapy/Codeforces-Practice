#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	int cntOdd=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cntOdd+=a[i]%2?1:0;
	}
	int cntEven=n-cntOdd;
	if(cntEven==n-1)
	{
		for(int i=0;i<n;i++)
			if(a[i]%2)
			{
				cout<<i+1<<endl;
				return 0;
			}
	}
	for(int i=0;i<n;i++)
		if(a[i]%2==0)
		{
			cout<<i+1<<endl;
			return 0;
		}
	return 0;
}