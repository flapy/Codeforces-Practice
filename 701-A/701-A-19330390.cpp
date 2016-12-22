#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	t=1;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+2];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];sum+=a[i];
		}
		int each=(sum*2)/n;
		int flag[103]={false};
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(each==a[i]+a[j] && !flag[i] && !flag[j])
				{
					cout<<i+1<<" "<<j+1<<endl;
					flag[i]=flag[j]=true;
					break;
				}
			}
		}
	}
}