#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<pair<int,int> ,int> m;
	int n;
	cin>>n;
	int ans=INT_MIN;
	while(n--)
	{
		int u,v;
		cin>>u>>v;
		m[make_pair(u,v)]++;
	}
	map<pair<int,int> ,int> ::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
		ans=max(itr->second,ans);
	cout<<ans;
	cout<<endl;
}