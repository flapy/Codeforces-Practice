#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string ans=s1+s2;
	sort(ans.begin(),ans.end());
	int l3=s3.length();
	int l1=s1.length();
	int l2=s2.length();
	if(l3!=(l1+l2))
	{
		cout<<"NO\n";
		return 0;
	}
	sort(s3.begin(),s3.end());
	for(int i=0;i<l3;i++)
	{
		if(ans[i]!=s3[i])
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}