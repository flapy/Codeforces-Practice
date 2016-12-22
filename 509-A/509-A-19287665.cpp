#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2][n+2];
	for(int i=0;i<n;i++)
		a[0][i]=1;
	for(int i=0;i<n;i++)
		a[i][0]=1;
	int ans=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=((i-1)>=0?a[i-1][j]:0) + (j-1>=0?a[i][j-1]:0);
			ans=max(ans,a[i][j]);
		}
	}
	cout<<ans<<endl;
}