#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	long long prefixSum[n+2];
	prefixSum[n-1]=a[n-1];
	for(int i=n-2;i>0;i--)
	{
		prefixSum[i]=prefixSum[i+1]+a[i];
	}
	long long ans=2*sum;
	if(n==1)
	{
		cout<<a[0];
		return 0;
	}
	if(n==2)
	{
		cout<<ans<<endl;
		return 0;
	}
	if(n==3)
	{
		cout<<ans+prefixSum[1];
		return 0;
	}
	for(int i=1;i<n-1;i++)
		ans+=prefixSum[i];
	cout<<ans<<endl;
	return 0;
}