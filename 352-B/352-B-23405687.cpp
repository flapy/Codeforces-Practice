// Fuck This Offer Letter Shit!
// If they need me they should be more worried
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map <int,list <int> > m;
	int a[n + 2];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		m[a[i]].push_back(i);
	}	
	map <int,list <int> > :: iterator itr;
	vector <pair <int,int> > v;
	for (itr = m.begin(); itr != m.end(); itr++)
	{
		list <int> l = itr -> second;
		list <int> :: iterator itr1;
		int dif = -1;
		if (l.size() == 1)
		{
			v.push_back({*(l.begin()), 0});
		}
		else
		{
			bool flag = true;
			itr1 = l.begin();
			int prev = *itr1;
			itr1++;
			int diff = *itr1 - prev;
			prev = *itr1;
			itr1++;
			for (;itr1 != l.end(); itr1++)
			{
				if (diff != *itr1 - prev)
				{
					flag = false;
					break;
				}
				prev = *itr1;
			}
			if (flag)
			{
				v.push_back({*(l.begin()), diff});
			}
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << a[v[i].first] << " " << v[i].second << endl;
	}
	return 0;
}