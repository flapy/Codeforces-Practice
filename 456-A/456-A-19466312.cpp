#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	pair<int,int> p[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n);
	for(int i=1;i<n;i++)
	{
		if(p[i].second<p[i-1].second)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex\n";
	return 0;
}