// EveryOne who got selected got offer letter from Amazon
// But I didn't! WHY WHY WHY WHY WHY WHY WHY WHY WHY 
#include <bits/stdc++.h>
using namespace std;
int findMin(multiset <int> s,int n)
{
	int ans = 0;
	while (n--)
	{
		int temp = *(s.begin());
		ans += temp;
		s.erase(s.begin());
		if (temp != 1)
			s.insert(temp - 1);
	}
	return ans;
}

int findMax(multiset <int> s,int n)
{
	int ans = 0;
	while (n--)
	{
		int temp = *(--s.end());
		ans += temp;
		s.erase(--s.end());
		if (temp != 1)
			s.insert(temp - 1);
	}
	return ans;
}

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	multiset <int> s;
	int a;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		s.insert(a);
	}
	cout << findMax(s,n) << " " << findMin(s,n) << endl;
	return 0;
}