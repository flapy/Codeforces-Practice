#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mn;
	cin>>mn;
	int b[mn+2];
	sort(a,a+n);
	map<int,int> m;
	for(int i=0;i<mn;i++)
		cin>>b[i],m[b[i]]++;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(m[a[i]-1])
		{
			ans++;
			m[a[i]-1]--;
			continue;
		}
		if(m[a[i]])
		{
			ans++;
			m[a[i]]--;
			continue;
		}
		if(m[a[i]+1])
		{
			ans++;
			m[a[i]+1]--;
			continue;
		}
	}
	cout<<ans<<endl;
	return 0;
}