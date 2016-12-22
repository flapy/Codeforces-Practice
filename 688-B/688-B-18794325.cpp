#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cin>>n;
	int l=n.length();
	cout<<n;
	for(int i=0;i<l;i++)
	{
		cout<<n[l-i-1];
	}
	cout<<endl;
	return 0;
}