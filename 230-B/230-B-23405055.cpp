// Fuck This Offer Letter Shit!
// If they need me they should be more worried
#include <bits/stdc++.h>
using namespace std;
bool primes[1000004];
vector <int> v;
void init(int n)
{
	memset(primes,false,sizeof(primes));
	primes[1] = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!primes[i])
		{
			int j = 2;
			while (i * j <= n)
			{
				primes[i * j] = true;
				j++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (!primes[i])
			v.push_back(i);
	}
}
int main()
{
	init (1000000);
	int n;
	cin >> n;
	long long a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		long long temp = sqrt(a);
		if (temp * temp == a)
		{
			if (binary_search(v.begin(),v.end(),temp))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}