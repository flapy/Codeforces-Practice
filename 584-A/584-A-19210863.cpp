#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	if(t!=10)
	{
		for(int i=0;i<n;i++)
			cout<<t;
		cout<<endl;
	}
	else
	{
		if(n<2)
			cout<<-1<<endl;
		else
		{
			cout<<1;
			for(int i=1;i<n;i++)
				cout<<0;
			cout<<endl;
		}
	}
	return 0;
}