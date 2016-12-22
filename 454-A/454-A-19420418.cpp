#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int lim=n/2;
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(flag)
		{
			for(int k=0;k<lim;k++)
			cout<<"*";
			int rem=n-2*lim;
			for(int k=0;k<rem;k++)
			cout<<"D";
			for(int k=0;k<lim;k++)
			cout<<"*";
			
			lim--;
			if(!lim)
			flag=false;
		}
		else
		{
			for(int k=0;k<lim;k++)
			cout<<"*";
			int rem=n-2*lim;
			for(int k=0;k<rem;k++)
			cout<<"D";
			for(int k=0;k<lim;k++)
			cout<<"*";
			lim++;
		}
		cout<<endl;
	}
	return 0;
}