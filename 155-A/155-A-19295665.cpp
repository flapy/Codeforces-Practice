#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int mi=a[0];
	int ma=a[0];
	int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>ma)
		{
			cnt++;
			ma=a[i];
		}
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]<mi)
		{
			cnt++;
			mi=a[i];
		}
	}
	cout<<cnt<<endl;
	return 0;
}