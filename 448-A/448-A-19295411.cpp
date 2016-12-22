#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	int b1,b2,b3;
	cin>>b1>>b2>>b3;
	int n;
	cin>>n;
	int cups=a1+a2+a3;
	int medals=b1+b2+b3;
	int shel=0;
	shel=(cups/5)+(cups%5==0?0:1);
	shel+=(medals/10)+(medals%10==0?0:1);
	if(shel<=n)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}