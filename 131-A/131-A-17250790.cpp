#include<bits/stdc++.h>
using namespace std;
string to_lower(string s)
{
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]<=90 && s[i]>=65)
		{
			s[i]+=32;
		}
	}
	return s;
}
bool is_upper(string s)
{
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(!(s[i]>=65 && s[i]<=90))
		return false;
	}
	return true;
}
bool except_one(string s)
{
	int l=s.length();
	for(int i=1;i<l;i++)
	{
		if(!(s[i]>=65 && s[i]<=90))
		return false;
	}
	return true;
}
int main()
{
	string s1;
	cin>>s1;
	if(is_upper(s1))
	{
		cout<<to_lower(s1);
	}
	else if(s1[0]>=97 && s1[0]<=122 && except_one(s1))
	{
		int l=s1.length();
		for(int i=0;i<l;i++)
		{
			if(s1[i]<=90 && s1[i]>=65)
			s1[i]+=32;
			else
			s1[i]-=32;
		}
		cout<<s1<<endl;
	}
	else
	cout<<s1<<endl;
}