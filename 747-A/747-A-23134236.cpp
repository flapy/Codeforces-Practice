#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	int t = 1;
	while (t--)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			cout << 1 << " " << 1 << endl;
			break;
		}
		int ans = INT_MAX;
		pair <int,int> p;
		for (int i = 1; i <= n / 2; i++)
		{
			int a = i;
			if (n % a == 0)
			{
				int b = n / a;
				int dif = b - a;
				if (dif >= 0)
				{
					if (dif <= ans)
					{
						p = {a,b};
						ans = dif;
					}
				}
			}
		}
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}