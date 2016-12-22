#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	//cin >> t;
	t = 1;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n+2];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int ans = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] + a[i-1] < k)
			{
				int net = k - (a[i] + a[i-1]);
				ans += net;
				int ai = a[i] + net;
				int aim1 = a[i-1] + net;
				if (!(i == n-1) && a[i] + a[i+1] > k)
				{
					a[i-1] = aim1;
				}
				else
				{
					a[i] = ai;
				}
				
			}
		}
		cout << ans << endl;
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}