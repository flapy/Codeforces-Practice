#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[8];
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	int ans = -1;
	while (ans == -1)
	{
		for (int i = 0; i < 7 ; i++)
		{
			sum += arr[i];
			if (sum >= n)
			{
				ans = i + 1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}