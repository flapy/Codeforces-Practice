#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int mul=m;
	int cnt=2;
	while(mul<=n)
	{
		if(mul*2>=n)
		{
			cout<<mul<<endl;
			return 0;
		}
		else
		mul=m*(cnt);
		cnt++;
	}
	cout<<-1<<endl;
	return 0;
}