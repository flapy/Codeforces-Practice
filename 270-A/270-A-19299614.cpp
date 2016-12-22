#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(360%(180-a))
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	return 0;
}