#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)
			flag=true;
	}
	if(flag)
		cout<<-1;
	else
		cout<<1;
	return 0;
}