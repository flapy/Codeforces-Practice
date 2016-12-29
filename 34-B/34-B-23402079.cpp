#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	int arr[n + 2];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp < 0)
		{
			arr[j++] = temp;
		}
	}
	int sum = 0;
	sort(arr, arr + j);
	for (int i = 0; i < min(m,j); i++)
	{
		sum += (-1 * arr[i]);
	}
	cout << sum << endl;
	return 0;
}