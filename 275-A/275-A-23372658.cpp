#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	t = 1;
	while (t--)
	{
		int n = 3;
		int arr[5][5] = {0};
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> arr[i][j];
			}
		}
		int temp[5][5] = {0};
		for (int i = 1; i <= n;i++)
		{
			for (int j = 1; j <= n; j++)
			{
				temp[i][j] += arr[i][j];
				temp[i - 1][j] += arr[i][j];
				temp[i + 1][j] += arr[i][j];
				temp[i][j - 1] += arr[i][j];
				temp[i][j + 1] += arr[i][j];
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (temp[i][j] % 2)
				{
					cout << 0;
				}
				else
				cout << 1;
			}
			cout << endl;
		}
	}
	return 0;
}