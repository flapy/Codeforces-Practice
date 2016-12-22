#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=n-1;i>=0;i--)
	{
		int cur=a[i];
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>cur)
			{
				a[i]+=a[j]-cur;
				a[j]-=(a[j]-cur);
				cur=a[i];
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}