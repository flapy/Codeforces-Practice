#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int front=i-1;
		int back=n-i;
		if(front>=a && b>=back)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}