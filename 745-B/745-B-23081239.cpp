// The author of this prpblem statement tried to convert Chinese to English
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	string s[n + 2];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int minX, minY, maxX, maxY;
	minX = minY = INT_MAX;
	maxX = maxY = INT_MIN;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == 'X')
			{
				minX = min(i,minX);
				maxX = max(i,maxX);
				minY = min(j,minY);
				maxY = max(j,maxY);
				cnt++;
			}
		}
	}
	int tot = (maxX - minX + 1) * (maxY - minY + 1);
	if (tot == cnt)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}