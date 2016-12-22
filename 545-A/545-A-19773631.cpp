#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	int mark[n+2];
	for(int i=0;i<n;i++)
		mark[i]=true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a;
			if(a==1)
				mark[i]=false;
			else if(a==2)
				mark[j]=false;
			else if(a==3)
				mark[i]=mark[j]=false;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
		ans+=(mark[i]==true);
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
		if(mark[i])
			cout<<i+1<<" ";
	cout<<endl;
	return 0;
}