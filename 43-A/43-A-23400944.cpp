#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	map <string,int> m;
	while (n--)
	{
		string s = "";
		cin >> s;
		m[s]++;
	}
	map <string,int> :: iterator itr;
	string winner = "";
	int ans = INT_MIN;
	for (itr = m.begin(); itr != m.end(); itr++)
	{
		if (itr -> second > ans)
		{
			ans = itr -> second;
			winner = itr -> first;
		}
	}
	cout << winner << endl;
	return 0;
}