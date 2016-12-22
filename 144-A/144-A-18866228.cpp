#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int mi=INT_MAX;
	int ma=INT_MIN;
	int pos1,pos2;
	for(int i=0;i<n;i++)
	{
		if(a[i]>ma)
		{
			ma=a[i];
			pos1=i;
		}
		if(a[i]<=mi)
		{
			mi=a[i];
			pos2=i;
		}
	}
	int ans=n-pos2-1+pos1;
	cout<<((pos2<pos1)?--ans:ans);
	return 0;
}