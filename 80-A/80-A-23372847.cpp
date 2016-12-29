#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	bool flag = false;
	for (int i = n + 1; i <= m; i++)
	{
		if (isPrime(i))
		{
			if (i == m)
			{
				flag = true;
			}
			break;
		}
	}
	if (flag)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	
	return 0;
}