#include <bits/stdc++.h>
using namespace std;
#define s second
#define f first

bool isLeft(pair <int,int> p1, pair<int,int> p2)
{
	if (p1.s == p2.s)
	{
		if (p2.f < p1.f)
			return true;
	}
	return false;
}

bool isRight(pair <int,int> p1, pair<int,int> p2)
{
	if (p1.s == p2.s)
	{
		if (p2.f > p1.f)
			return true;
	}
	return false;
}

bool isUpper(pair <int,int> p1, pair<int,int> p2)
{
	if (p1.f == p2.f)
	{
		if (p2.s > p1.s)
			return true;
	}
	return false;
}

bool isLower(pair <int,int> p1, pair<int,int> p2)
{
	if (p1.f == p2.f)
	{
		if (p2.s < p1.s)
			return true;
	}
	return false;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	pair <int,int> p[n + 2];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].f >> p[i].s;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag1, flag2, flag3, flag4;
		flag1 = flag2 = flag3 = flag4 = false;
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (isUpper(p[i],p[j]))
				{
					flag1 = true;
				}
				else if (isLower(p[i],p[j]))
				{
					flag2 = true;
				}
				else if (isLeft(p[i],p[j]))
				{
					flag3 = true;
				}
				else if (isRight(p[i],p[j]))
				{
					flag4 = true;
				}
			}
			if (flag1 && flag2 && flag3 && flag4)
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}