#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	//cin>>t;
	t=1;
	while(t--)
	{
		int n;
		cin>>n;
		int m,c;
		int mis,cis;
		mis=cis=0;
		for(int i=0;i<n;i++)
		{
			cin>>m>>c;
			if(m>c)
				mis++;
			else if(c>m)
				cis++;
		}
		if(mis>cis)
		cout<<"Mishka\n";
		else if(mis==cis)
			cout<<"Friendship is magic!^^\n";
		else
			cout<<"Chris\n";
	}
	return 0;
}