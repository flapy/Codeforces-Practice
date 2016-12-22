#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	map<char,int> m;
	m['1']=a1;
	m['2']=a2;
	m['3']=a3;
	m['4']=a4;
	string s;
	cin>>s;
	int l=s.length();
	int sum=0;
	for(int i=0;i<l;i++)
		sum+=m[s[i]];
	cout<<sum<<endl;
	return 0;
}