#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	int t = 1;
	while (t--)
	{
		string str;
		cin >> str;
		int l = str.length();
		set <string> s;
		while (1)
		{
			s.insert(str);
			string temp = str[l - 1] + str;
			temp.pop_back();
			str = temp;
			if (s.find(str) != s.end())
				break;
		}
		cout << s.size() << endl;
	}
	return 0;
}