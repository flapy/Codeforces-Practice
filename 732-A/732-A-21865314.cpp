#include <bits/stdc++.h>
using namespace std;
bool foo(int k,int r)
{
	if ( k % 10 == 0)
		return true;
	if (k % 10 == r)
		return true;
	return false;
}
int main()
{
	int k, r;
	cin >> k >> r;
	int cnt = 1;
	int temp = k;
	while (!(foo(temp,r)))
	{
		cnt ++;
		temp = k * cnt;
	}

	cout << cnt << endl;
	return 0;
}