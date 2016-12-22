#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	string sOdd="I hate that ";
	string sEven="I love that ";
	for(int i=1;i<n;i++)
	{
		if(i%2)
			cout<<sOdd;
		else
			cout<<sEven;
	}
	if(n%2)
		cout<<"I hate it\n";
	else
		cout<<"I love it\n";
	return 0;
}