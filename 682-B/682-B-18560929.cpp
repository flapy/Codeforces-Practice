#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	bool flag=true;
	int j=1;
	for(int i=0;i<n;i++)
	{
		if(j<=a[i])
		{
			j++;
		}
	}
	cout<<j<<endl;
	return 0;
}