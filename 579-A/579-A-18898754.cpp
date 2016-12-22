#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cl=log2(n);
	int net=pow(2,cl);
	int ans=1;
	int rem;
	while(1)
	{
		n=n-net;
		if(!n)
			break;
		ans++;
		int x=log2(n);
		net=pow(2,x);
	}
	cout<<ans<<endl;
	return 0;
}