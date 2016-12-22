// When you are fooled for no reason!
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 1;
	while (t--)
	{
    	int n, a, b;
    	cin >> n >> a >> b;
    	string s;
    	cin >> s;
    	if (s[a - 1] == s[b - 1])
    	{
    		cout << 0 << endl;
    	}
    	else
    	{
    		cout << 1 << endl;
    	}
	}
	return 0;
}