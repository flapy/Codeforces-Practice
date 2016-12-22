#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum=0;
	int cnt=0;
	for(int i=1;;i++)
	{
		int cur=(i*(i+1))/2;
		sum+=cur;
		if(sum<=n)
			cnt++;
		else
			break;
	}
	cout<<cnt<<endl;
	return 0;
}