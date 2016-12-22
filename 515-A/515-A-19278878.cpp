#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b,s;
	cin>>a>>b>>s;
	a=a<0?-a:a;
	b=b<0?-b:b;
	if((a+b)==s)
		cout<<"Yes\n";
	else if(a+b>s)
		cout<<"No\n";
	else
	{
		long long int rem=s-(a+b);
		if(rem%2)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}