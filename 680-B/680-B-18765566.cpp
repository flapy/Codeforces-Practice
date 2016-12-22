#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int d[n];
	int cnt=0;
	a--;
	int ans=(arr[a]!=0?1:0);
	for(int d=1;;d++)
	{
		if(a+d<n && a-d>=0)
		{
			if(arr[a+d]+arr[a-d]>1)
			{
				ans+=2;
			}
		}
		else if(a+d<n)
		{
			ans+=arr[a+d];
		}
		else if(a-d>=0)
		{
			ans+=arr[a-d];
		}
		else
		{
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}