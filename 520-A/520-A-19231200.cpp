#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char,int> m;
	for(int i=0;i<n;i++)
	{
		if(s[i]<=122 && s[i]>=97)
			m[s[i]]=true;
		else
			m[s[i]+32]=true;
	}
	cout<<(m.size()==26?"YES":"NO")<<endl;
	return 0;
}