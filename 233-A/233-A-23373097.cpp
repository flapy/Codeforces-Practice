#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin >> n;
	if (n % 2)
	{
		cout << -1 << endl;
	}
	else
	{
		int arr[n + 2];
		for (int i = 1; i <= n; i++)
		{
			arr[i] = i;
		}
		for (int i = 1; i <= n; i += 2)
		{
			swap(arr[i],arr[i + 1]);
		}
		for (int i = 1; i <= n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}