#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	map<int,bool> h;
	map<int,bool> v;
	for(int i=0;i<n*n;i++)
	{
		cin>>a>>b;
		if(! h[a] && !v[b])
		{
			cout<<i+1<<" " ;
			h[a]=v[b]=true;
		}
	}

	return 0;
}