#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main() {
	// your code goes here
	int  n;
	cin >> n;
	map <int,int> m;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		m[temp] = i;
	}
	int q;
	cin >> q;
	int val;
	lli vasya, petya;
	vasya = petya = 0;
	while (q--)
	{
		cin >> val;
		vasya += (lli) m[val];
		petya += (lli) n - (lli) m[val] + (lli) 1;
	}
	cout << vasya << " " << petya << endl;
	return 0;
}