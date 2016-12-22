#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,n;
	cin>>a>>b>>n;
	int turn=0;
	while(n>0)
	{
		n-=__gcd(n,turn%2==0?a:b);
		turn++;
	}
	cout<<!(turn%2)<<endl;
	return 0;
}