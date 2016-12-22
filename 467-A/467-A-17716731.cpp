#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int cnt=0;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(b-a>=2)
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}