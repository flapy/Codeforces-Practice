// When you are fooled for no reason!
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 1;
	while (t--)
	{
		int n;
		int arr[] = {8,4,2,6};
		cin >> n;
		if (n == 0)
		{
			cout << 1 << endl;
			break;
		}
		if (n % 4 == 0)
		{
			cout << arr[3] << endl;
		}
		else
		{
			cout << arr[(n % 4) - 1] << endl;
		}
	}
	return 0;
}