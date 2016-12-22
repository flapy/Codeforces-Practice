#include <bits/stdc++.h>
using namespace std;
int main()
{
	// freopen("inp","r",stdin);
	// freopen("out.txt","w",stdout);
	int t = 1;
	while (t--)
	{
		int a, b ,c;
		cin >> a >> b >> c;
		int sum  = 0;
		while (1)
		{
			if ((a - 1 >= 0) && (b - 2 >= 0) && (c - 4 >= 0))
			{
				sum += 7;
				a--;
				b -= 2;
				c -= 4;
			}
			else
				break;
		}
		cout << sum << endl;
	}
	return 0;
}