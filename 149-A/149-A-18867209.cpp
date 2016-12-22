//My Internet Would screw me UP!!
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[13];
	for(int i=0;i<12;i++)
		cin>>a[i];
	sort(a,a+12);
	reverse(a,a+12);
	int sum=0;
	int ans=0;
	bool flag=false;	
	for(int i=0;i<12;i++)
	{
		if(sum>=n)
		{
			ans=i;
			flag=true;
			break;
		}
		sum+=a[i];
	}
	if(flag)
	cout<<(sum>=n?ans:-1)<<endl;
	else
	{
		cout<<(sum>=n?12:-1)<<endl;
	}
}