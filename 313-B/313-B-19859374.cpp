#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int m;
	cin>>m;
	int n=s.length();
	int dp[n+2];
	dp[0]=(s[0]==s[1]);
	for(int i=1;i<n-1;i++)
	{
		dp[i]=dp[i-1];
		if(s[i]==s[i+1])
		{
			dp[i]++;
		}
		//cout<<dp[i]<<" ";
	}
	dp[n-1]=dp[n-2];
	//cout<<endl;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		l--;
		r--;
		if(l==0)
		{
			cout<<dp[r-1]<<"\n";
		}
		else
		{
			cout<<dp[r-1]-dp[l-1]<<"\n";
		}
	}
	return 0;
}