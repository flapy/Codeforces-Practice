#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int l=s.length();
	string s1="AB";
	string s2="BA";
	vector<int> v,v1;
	for(int i=0;i<l-1;i++)
	{
		if(s[i]=='A' && s[i+1]=='B')
		{
			v.push_back(i);
		}
	}
	for(int i=0;i<l-1;i++)
	{
		if(s[i]=='B' && s[i+1]=='A')
		{
			v1.push_back(i);
		}
	}
	int l1=v.size();
	for(int i=0;i<l1;i++)
	{
		int ind=upper_bound(v1.begin(),v1.end(),v[i]+1)-v1.begin();
		if(ind<v1.size())
		{
			cout<<"Yes\n";
			return 0;
		}
	}
	int l2=v1.size();
	for(int i=0;i<l2;i++)
	{
		int ind=upper_bound(v.begin(),v.end(),v1[i]+1)-v.begin();
		if(ind<v.size())
		{
			cout<<"Yes\n";
			return 0;
		}
	}
	cout<<"No\n";
	return 0;
}