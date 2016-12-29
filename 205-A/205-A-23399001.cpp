#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	pair <int,int> arr[n + 2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr,arr + n);
	if (n != 1 && arr[0].first == arr[1].first)
	{
		cout << "Still Rozdil\n";
	}
	else
	{
		cout << arr[0].second << endl;
	}
	return 0;
}