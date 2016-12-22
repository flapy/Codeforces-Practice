#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=INT_MAX;
	int a,pr;
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>pr;
		ans=min(ans,pr);
		sum+=(ans*a);
	}
	cout<<sum<<endl;
	return 0;
}