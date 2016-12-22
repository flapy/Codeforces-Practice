#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	t=1;
	while(t--)
	{
		long long n,m,a;
		cin>>n>>m>>a;
		long long cnt=ceil(n/(double)a);
		if(m>a)
		{
			m-=a;
			long long ans=m%a?(m/a+1):(m/a);
			cnt+=(ans*cnt);
		}
		cout<<cnt<<endl;
	}
}