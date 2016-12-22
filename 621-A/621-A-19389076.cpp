#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	long long int sum=0;
	for(int i=0;i<n;i++)
		cin>>a[i],sum+=a[i];
	sort(a,a+n);
	if(sum%2)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2)
			{
				sum-=a[i];
				break;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}