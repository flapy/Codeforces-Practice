#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	t = 3;
	while (t--)
	{
		string s;
		cin >> s;
		int l = s.length();
		for (int i = 0; i < l; i++)
		{
			if (s[i] == '.')
			{
				cout << 0;
			}
			else 
			{
				if (s[i + 1] == '.')
				{
					cout << 1;
					i++;
				}
				else
				{
					cout << 2;
					i++;
				}
			}
		}
		cout << endl;
	}
	return 0;
}