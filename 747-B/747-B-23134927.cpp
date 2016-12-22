#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	int t = 1;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		map <char,int> m;
		for (int i = 0; i < n; i++)
			m[s[i]]++;
		int cntA = m['A'];
		int cntG = m['G'];
		int cntC = m['C'];
		int cntT = m['T'];
		int cntQ = m['?'];
		char arr[] = {'A', 'G', 'C', 'T'};	
		int ma = max(cntG,max(cntA,max(cntT,cntC)));
		int reqd = cntT + cntA + cntC + cntG;
		reqd = 4 * ma - reqd;
		if (cntQ >= reqd)
		{
			for (int i = 0; i < 4; i++)
			{
				int tempCnt = m[arr[i]];
				int fill = ma - tempCnt;
				for (int j = 0, k = 0; j < n && k < fill ; j++)
				{
					if (s[j] == '?')
					{
						s[j] = arr[i];
						k++;
					}
				}
				cntQ -= fill;
			}
			if (cntQ >= 0)
			{
				if (cntQ % 4 == 0)
				{
					int q = 4;
					for (int i = 0; i < 4; i++)
					{
						int cnt = 0;
						for (int j = 0; j < n; j++)
						{
							if (cnt == cntQ / 4)
								break;
							if (s[j] == '?')
							{
								s[j] = arr[i];
								cnt++;
							}
						}
					}
					cout << s << endl;
				}
				else
				{
					cout << "===" << endl;
				}
			}
		}
		else
		{
			cout << "===" << endl;
		}
	}
	return 0;
}