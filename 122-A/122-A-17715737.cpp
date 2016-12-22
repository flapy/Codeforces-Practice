#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool is_lucky(int n)
{
	while(n!=0)
	{
		if(n%10!=4 && n%10!=7)
		return false;
		n/=10;
	}
	return true;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int high=n/2;
	string ans="NO";
	if(is_lucky(n))
	{
		cout<<"YES\n";
		return 0;
	}
	for(int i=1;i<=high;i++)
	{
		if(is_lucky(i))
		{
			if(n%i==0)
			{
				ans="YES";
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}