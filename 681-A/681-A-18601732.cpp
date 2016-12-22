#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	bool ans=false;
	while(n--)
	{
		string s;
		int u,v;
		cin>>s>>u>>v;
		if(u>=2400 &&v>u)
		{
			ans=true;
		}
	}
	if(ans)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}