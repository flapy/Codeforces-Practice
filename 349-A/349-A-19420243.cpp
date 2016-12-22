#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		if(a[i]==100)
		{
			if(m[50]>=1 && m[25]>=1)
			{
				m[50]--;
				m[25]--;
			}
			else if(m[25]>=3)
			{
				m[25]-=3;
			}
			else
			{
				cout<<"NO\n";
				return 0;
			}
		}
		else if(a[i]==50)
		{
			if(m[25]>=1)
			{
				m[25]--;
			}
			else
			{
				cout<<"NO\n";
				return 0;
			}
		}
		m[a[i]]++;
	}
	cout<<"YES\n";
	return 0;
}