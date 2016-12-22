#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int cnt=0;
	while(1)
	{
		if(n==0 || m==0)
			break;
		n--;
		m--;
		cnt++;
	}
	if(cnt%2)
		cout<<"Akshat\n";
	else
		cout<<"Malvika\n";
	return 0;
}