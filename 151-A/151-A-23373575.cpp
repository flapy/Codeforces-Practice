#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int  n, k, l, c, d, p, nl, np;
	cin >>  n >> k >> l >> c >> d >> p >> nl >> np;
	int tot = (k * l) / nl;
	int lime = c * d;
	int salt = p / np;
	cout << min(tot,min(lime,salt)) / n;
	return 0;
}