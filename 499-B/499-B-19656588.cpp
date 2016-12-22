#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	//cin>>t;
	t=1;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		map<string,string> m1;
		while(m--)
		{
			string a,b;
			cin>>a>>b;
			m1[a]=b;
		}
		while(n--)
		{
			string s;
			cin>>s;
			if(m1[s].length()>=s.length())
			{
				cout<<s<<" ";
			}
			else
			{
				cout<<m1[s]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}