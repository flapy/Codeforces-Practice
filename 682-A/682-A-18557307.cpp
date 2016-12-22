#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	t=1;
	//cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int mi=min(n,m);
		int ma=max(n,m);
		long long int hi,lo;
		long long int ans=0;
		for(int i=1;i<=mi;i++)
		{
			bool flag=false;
			int rem=i%5;
			 lo=5-rem;
			for(int j=ma;j>=1;j--)
			{
				if((j+i)%5==0)
				{
					flag=true;
					hi=j;
					break;
				}
			}
			if(flag)
			{
				ans+=((hi-lo)/5)+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}