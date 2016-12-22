#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int cr=0;
	int po=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1)
			po+=a[i];
		else
		{
			if(po)
				po--;
			else
				cr++;
		}
	}
	cout<<cr<<endl;
	return 0;
}