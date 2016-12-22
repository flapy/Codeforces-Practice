#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a;
	double sum=0;
	for(int i=0;i<n;i++)
		cin>>a,sum+=a;
	printf("%lf\n",sum/n);
}