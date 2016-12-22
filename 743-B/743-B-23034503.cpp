#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli power(lli n,lli k)
{
	lli ans = 1;
	for(int i = 0 ; i < k ;i++)
	{
		ans *= n;
	}
	return ans;
}
int main()
{
	int t = 1;
	while (t--)
	{
		lli n, k;
		cin >> n >> k;
		lli len = power(2,n) - 1;
		lli mid = len / (lli)2 + 1;
		while (1)
		{
			if (k == mid)
			{
				cout << n << endl;
				break;
			}
			else if (k > mid)
			{
				k -= mid;
			}
			n--;
			len = power(2,n) - 1;
			mid = len / 2 + 1;;
		}
	}
	return 0;
}