#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	set<int> s;
	int x;
	cin>>x;
	int e;
	for(int i=0;i<x;i++)
	{
		cin>>e;
		s.insert(e);
	}
	int y;
	cin>>y;
	for(int i=0;i<y;i++)
	{
		cin>>e;
		s.insert(e);
	}
	if(s.size()==n)
		cout<<"I become the guy.\n";
	else
		cout<<"Oh, my keyboard!\n";
	return 0;
}