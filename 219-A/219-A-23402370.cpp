#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int k;
	cin >> k;
	string s;
	cin >> s;
	int l = s.length();
	map <char,int> m;
	int cnt = -1;
	for (int i = 0; i < l; i++)
	{
		m[s[i]]++;
		cnt = m[s[i]];
	}
	bool ans = true;
	map <char,int> :: iterator itr;
	for (itr = m.begin(); itr != m.end(); itr++)
	{
		if (itr -> second % k != 0)
		{
			ans = false;
			break;
		}
	}
	if (ans)
	{
		map <char,int> :: iterator itr;
		for (int i = 0; i < k; i++)
		{
			for (itr = m.begin(); itr != m.end(); itr++)
			{
				int freq = itr -> second / k;
				while (freq--)
					cout << itr -> first;
			}
		}
	}
	else
	{
		cout << -1 << endl;
	}
	
	return 0;
}