// Only One Substring WAS ASKED! :(
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s,map<char,int> m)
{
	for (int i = 0;i < 26;i++)
	{
		if (m[(char)(i+'A')] >= 2)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	for (int i = 0;i < l;i++)
	{
		string subString = "";
		for(int j = i;j < i+26 && j < l;j++)
		{
			subString += s[j];
		}
		if(subString.length() < 26)
		{
			break;
		}
		map <char,int> m;
		int subLen = subString.length();
		for (int k = 0;k < subLen;k++)
			m[subString[k]]++;

		
		if (isValid(subString,m))
		{
			for (int k = 0;k < 26;k++)
			{
				if (subString[k] == '?')
				{
					for (int l = 0;l < 26;l++)
					{
						if (m[(char)(l+'A')] == 0)
						{
							s[k+i] = (char)(l+'A');
							m[(char)(l+'A')]++;
							break;
						}
					}
				}
			}
			for (int k = 0;k < l;k++)
			{
				if(s[k] == '?')
					s[k] = 'Z';
			}
			cout << s << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}