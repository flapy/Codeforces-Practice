#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 1;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans = "";
		int len = n;
		for (int i = 0; i < n; i++)
		{
			if (len % 2 != 0)
			{
				ans += (char)s[i];
				// cout << ans << endl;
			}
			else
			{
				string temp = "";
				temp += (char)s[i];
				// cout << temp << endl;
				temp += ans;
				ans = temp;
			}
			len--;
		}
		cout << ans << endl;
	}
	return 0;
}