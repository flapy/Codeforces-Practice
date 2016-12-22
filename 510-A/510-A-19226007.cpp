#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int flag=false;
	for(int i=1;i<=n;i++)
	{
		if(!flag)
		{
			for(int j=1;j<=m;j++)
			{
				if(i%2)
				{
					cout<<'#';
				}
				else
				{
					if(j!=m)
						cout<<'.';
					else
						cout<<'#';
					flag=true;
				}
			}
			cout<<endl;
		}
		else
		{
			for(int j=m;j>=1;j--)
			{
				if(i%2)
				{
					cout<<'#';
					continue;
				}
				if(j==m)
					cout<<'#';
				else
					cout<<'.';
					flag=false;
			}
			cout<<endl;
		}
	}
	return 0;
}