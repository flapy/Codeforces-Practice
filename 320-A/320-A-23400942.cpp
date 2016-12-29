#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s = "";
	cin >> s;
	map <string,bool> m;
	m["1"] = true;
	m["14"] = true;
	m["144"] = true;
	int l = s.length();
	string cur = "";
	for (int i = 0; i < l; i++)
	{
		cur += s[i];
		if (m[cur])
		{
			continue;
		}
		else
		{
			cur = s[i];
			if (!m[cur])
			{
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}