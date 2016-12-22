#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	int t = 1;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		lli arr[n + 2];
		map<lli,lli> m;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			m[arr[i]]++;
		}
		lli ans = 0;
		map <lli,lli> :: iterator itr;
		map<pair<lli,lli> ,bool> mark;
		for (itr = m.begin(); itr != m.end(); itr++)
		{
			lli reqd = x ^ itr->first;
			if (reqd == itr -> first)
			{
				lli no = itr -> second;
				if (itr->second > 1)
				{
					ans += (((no) * (no - 1)) / 2);
				}
			}
			else if (m[reqd])
			{
				if ( !mark[{min(reqd,itr -> first),max(reqd,itr -> first)}])
				{
					mark [{min(reqd,itr -> first),max(reqd,itr -> first)}] = true;	
					ans += (m[reqd] * itr ->second);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}