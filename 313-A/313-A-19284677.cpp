#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=s.length();
	if(n==1)
	{
		cout<<n<<endl;
		return 0;
	}
	if(s[0]=='-' && n==2)
	{
		cout<<0<<endl;
		return 0;
	}
	string s1=s.substr(0,n-1);
	string s2=s.substr(0,n-2)+s[n-1];
	cout<<max(stoi(s),max(stoi(s1),stoi(s2)))<<endl;
	return 0;
}