// FUCK FUCK Some MORE FUCK :()
#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;

int main() {
	// your code goes here
	int t = 1;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s1 == s2)
		{
			cout << 0 << endl;
		}
		else
		{
			map <char,char> m;
			int l = s1.length();
			for (int i = 0; i < l; i++)
			{
				if (m.find(s1[i]) != m.end())
				{
					if (m[s1[i]] == s2[i])
					{
						continue;
					}
					else
					{
						cout << -1 << endl;
						return 0;
					}
				}
				else if (m.find(s2[i]) != m.end())
				{
					if (m[s2[i]] == s1[i])
					{
						continue;
					}
					else
					{
						cout << -1 << endl;
						return 0;
					}
				}
				else
				{
					m[s1[i]] = s2[i];
					m[s2[i]] = s1[i];
				}
			}
			map <char,char> :: iterator itr;
			int ans = m.size();
			for (itr = m.begin(); itr != m.end(); itr++)
			{
				if (itr -> first == itr -> second)
				{
					ans--;
				}
			}
			cout << ans / 2 << endl;
			for (itr = m.begin(); itr != m.end(); itr++)
			{
				if (itr -> first != itr -> second)
				{
					cout << itr -> first << " " << itr -> second << endl;
					m[itr -> second] = itr -> second;
				}
			}
		}
	}
	return 0;
}