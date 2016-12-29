#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n + 2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	pair <int,int> ind;
	int ans = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		int temp = abs(arr[i] - arr[i - 1]);
		if (temp < ans)
		{
			ans = temp;
			ind = {i + 1,i};
		}
	}
	if (abs(arr[0] - arr[n - 1]) < ans)
	{
		ans = abs(arr[0] - arr[n - 1]);
		ind = {1,n};
	}
	cout << ind.first << " " << ind.second << endl;
	return 0;
}