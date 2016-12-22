#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	map<int,int> m;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		m[a]++;
	}
	map<int,int> ::iterator itr;
	int ans=INT_MIN;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		ans=max(ans,itr->second);
	}
	cout<<ans<<" "<<m.size()<<endl;
	return 0;
}