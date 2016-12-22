#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	long long int mi,ma;
	for(int i=0;i<n;i++)
	{
		if(i+1<n && i-1>=0)
		{
			mi=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
			ma=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
		}
		else if(i+1<n)
		{
			mi=abs(a[i]-a[i+1]);
			ma=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
		}
		else
		{
			mi=abs(a[i]-a[i-1]);
			ma=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
		}
		cout<<mi<<" "<<ma<<endl;
	}
	return 0;
}