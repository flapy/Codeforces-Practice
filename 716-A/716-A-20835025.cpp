#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, c;
	cin >>  n >> c;
	int prev, a;
	cin >> prev;
	int cnt=1;
	for(int i=1;i<n;i++)
	{
		cin >> a;
		if(a-prev <= c)
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
		prev = a;
	}
	cout << cnt << endl;
	return 0;
}