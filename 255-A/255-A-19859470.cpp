#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	map<int,int> m;
	map<int,string> ans;
	ans[0]="chest";
	ans[1]="biceps";
	ans[2]="back";
	for(int i=0;i<n;i++)
	{
		cin>>a;
		m[i%3]+=a;
	}
	int ma=max(m[0],max(m[1],m[2]));
	if(ma==m[0])
	{
		cout<<ans[0];
	}
	else if(ma==m[1])
	{
		cout<<ans[1];
	}
	else
	{
		cout<<ans[2]<<endl;
	}
	return 0;
}