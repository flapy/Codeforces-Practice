#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		int a;
		while(num--)
		{
			cin>>a;
			s.insert(a);
		}
	}
	if(s.size()==m)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}