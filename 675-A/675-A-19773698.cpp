#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	// your code goes here
	lli a,b,c;
	cin>>a>>b>>c;
	if(c==0)
	{
		if(b==a)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		return 0;
	}
	if((b-a)%c)
		cout<<"NO\n";
	else
	{
		if((b-a)/c+1<=0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}