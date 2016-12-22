#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=INT_MIN;
	int prev;
	int cnt;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			prev=a[i];
			cnt=1;
		}
		else if(a[i]>prev)
		{
			prev=a[i];
			cnt++;
			ans=max(ans,cnt);
		}
		else
		{
			prev=a[i];
			cnt=1;
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}