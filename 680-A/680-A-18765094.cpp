#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5];
	int sum=0;
	map<int,int> m;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		sum+=a[i];
		m[a[i]]++;
	}
	map<int,int> ::iterator itr;
	int ans=sum;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		if(itr->second>=3)
		{
			ans=min(ans,sum-(3*itr->first));
		}
		else if(itr->second>=2)
		{
			ans=min(ans,sum-(2*itr->first));
		}
	}
	cout<<ans<<endl;
	return 0;
}