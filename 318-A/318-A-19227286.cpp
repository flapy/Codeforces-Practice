#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	lli k,n;
	cin>>n>>k;
	lli oddLast=(n%2?(n):--n);
	lli evenLast=(n%2==0)?n:(--n);
	lli oddNum=((oddLast-1)/2)+1;
	if(k<=oddNum)
	{
		cout<<(1+(k-1)*2);
		return 0;
	}
	lli no=k-oddNum;
	cout<<2+((no-1)*2);
	return 0;
}