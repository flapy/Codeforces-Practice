#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c1,c2,c3,c4,c5;
	cin>>c1>>c2>>c3>>c4>>c5;
	int sum=c1+c2+c3+c4+c5;
	if(sum%5 || sum==0)
		cout<<-1<<endl;
	else
		cout<<sum/5<<endl;
	return 0;
}