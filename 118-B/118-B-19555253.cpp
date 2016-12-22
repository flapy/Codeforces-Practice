#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int cnt=1;
	int spaces=2*n;
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<spaces;j++)
		cout<<" ";
		spaces--;
		if(cnt==1)
		{
			cout<<0<<endl;
			cnt+=2;
		}
		else
		{
			for(int j=0;j<=cnt/2;j++)
				cout<<j<<" ";
			for(int j=cnt/2-1;j>0;j--)
			{
				cout<<j<<" ";
			}
			cout<<0<<endl;
			cnt+=2;
		}
	}
	spaces=2;
	cnt=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<spaces;j++)
		{
			cout<<" ";
		}
		spaces+=2;
		if(cnt==1)
		{
			cout<<0<<endl;
			continue;
		}
		for(int j=0;j<cnt;j++)
		{
			cout<<j<<" ";	
		}
		for(int j=cnt-2;j>=0;j--)
		{
			if(j==0)
				cout<<j<<endl;
			else
				cout<<j<<" ";
		}
		cnt--;
	}
	return 0;
}