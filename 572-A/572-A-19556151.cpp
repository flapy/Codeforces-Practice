#include <iostream>
#include<vector>
using namespace std;
int main() {
	// your code goes here
	int na,nb;
	cin>>na>>nb;
	int k,m;
	cin>>k>>m;
	int a[na+2],b[nb+2];
	for(int i=0;i<na;i++)
		cin>>a[i];
	for(int i=0;i<nb;i++)
		cin>>b[i];
	int e1=a[k-1];
	int e2=b[nb-m];
	if(e1<e2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}