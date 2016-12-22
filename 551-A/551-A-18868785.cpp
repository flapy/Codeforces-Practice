#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	int b[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<1+(n-(upper_bound(a,a+n,b[i])-a))<<" ";
	}
	cout<<endl;
}