#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int ans=x;
	long long int dis=0;
	while(n--)
	{
		char ch;
		long long int d;
		cin>>ch>>d;
		if(ch=='+')
		{
			ans+=d;
		}
		else
		{
			if(ans-d<0)
			{
				dis++;
			}
			else
				ans-=d;
		}
	}
	cout<<ans<<" "<<dis<<endl;
	return 0;
}