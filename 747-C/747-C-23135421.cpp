#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base :: sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	int arr[n + 2] = {0};
	int storeState[n + 2] = {0};
	while (q--)
	{
		int t, k ,d;
		cin >> t >> k >> d;
		for (int i = 1; i <= n; i++)
		{
			storeState[i] = arr[i];
		}
		int sum = 0;
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (cnt == k)
				break;
			if (arr[i] == 0 || arr[i] <= t)
			{
				arr[i] = t + d;
				sum += i;
				cnt++;
			}
		}
		if (cnt != k)
		{
			cout << -1 << endl;
			for (int i = 1; i <= n; i++)
			{
				arr[i] = storeState[i];
			}
		}
		else
		{
			cout << sum << endl;
		}
	}
	return 0;
}