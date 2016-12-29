#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
void init(int n,int m,int k)
{
	int cnt = 1;
	int ans = cnt;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (cnt == k)
			{
				cout << i << " " << j << " L" << endl;
				return;
			}
			++cnt;
			if (cnt == k)
			{
				cout << i << " " << j << " R" << endl;
				return;
			}
			cnt++;
		}
	}
}
int main() {
	// your code goes here
	int t = 1;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		init(n,m,k);
	}
	return 0;
}