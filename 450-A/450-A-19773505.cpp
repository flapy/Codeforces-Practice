#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int a;
	int ind,ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		int k=(a%m==0?a/m:a/m+1);
		if(k>=ans)
		{
			ind=i+1;
			ans=k;
		}
	}
	cout<<ind<<endl;
	return 0;
}