#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string key="qwertyuiopasdfghjkl;zxcvbnm,./";
	string s;
	map<char,int> m;
	m['R']=-1;
	m['L']=1;
	char ch;
	cin>>ch;
	cin>>s;
	int l=s.length();
	string ans="";
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<key.length();j++)
		{
			if(s[i]==key[j])
			{
				ans+=key[j+m[ch]];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}