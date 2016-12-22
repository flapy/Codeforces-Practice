#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	string ans="NO";
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			ans="YES";
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}