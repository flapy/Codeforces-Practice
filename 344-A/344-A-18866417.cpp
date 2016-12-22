//Internet was disrupted!!
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t=0;
	int cnt=0;
	string prev;
	while(n--)
	{
		string s;
		cin>>s;
		if(t==0)
		{
			t++;
			prev=s;
			cnt++;
		}
		else
		{
			if(s==prev)
			{
				continue;
			}
			else
			{
				prev=s;
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}