#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	cout<<min(d1+d2+d3,min(2*(d1+d3),min(2*(d3+d2),2*(d1+d2))))<<endl;
	return 0;
}