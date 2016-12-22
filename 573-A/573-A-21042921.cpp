#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a;
	cin >> n;
	bool ans = true;
	int store;
	for(int i = 0;i < n;i++)
	{
		cin >> a;
		while (a%2 == 0)
		{
			a/=2;
		}
		while (a%3 == 0)
		{
			a/=3;
		}

		if (i == 0)
		{
			store = a;
		}
		if(store != a)
		{
			ans = false;
		}
				
	}

	if (ans)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}