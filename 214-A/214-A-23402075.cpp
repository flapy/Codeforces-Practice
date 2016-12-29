#include <bits/stdc++.h>
using namespace std;
bool isValid(int a,int b,int val)
{
	return (a + b == val);
}
int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (isValid(i,j * j,n) && isValid(j,i * i,m))
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}