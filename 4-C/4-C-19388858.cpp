#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	map<string,int> m;
	while(t--)
	{
		string s;
		cin>>s;
		if(m[s])
		{
			cout<<s<<m[s]<<endl;
		}
		else
		{
			cout<<"OK\n";
		}
		m[s]++;
	}
	return 0;
}