#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x;
	cin>>x;
	int a;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
	}
	if(sum==0)
	{
		cout<<0<<endl;
		return 0;
	}
	sum=abs(sum);
	if(abs(sum)<=x)
		cout<<1<<endl;
	else
		cout<<sum/x+(sum%x==0?0:1)<<endl;
	return 0;
}