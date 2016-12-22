#include <bits/stdc++.h>
using namespace std;
list <int> adj[103];
bool visit[104];
int dfs(int u,int cycleLength,int start)
{
	list <int> :: iterator itr;
	for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
	{
		if (!visit[*itr])
		{
			visit[*itr] = true;
			return dfs(*itr,cycleLength + 1,start);
		}
	}
	return cycleLength;
}
int main()
{
	int n;
	cin >> n;
	int indegree[104] = {0};
	for (int u = 1; u <= n; u++)
	{
		int v;
		cin >> v;
		indegree[v]++;
		adj[u].push_back(v);
	}

	for (int i = 1; i <= n; i++)
	{
		if (indegree[i] == 0)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	int cycleLength;
	int lcm = 1;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			cycleLength = dfs(i,1,i);
			// cout << i << " " << cycleLength << endl;
			if (cycleLength % 2 == 0)
				cycleLength /= 2;
			lcm = (lcm * cycleLength) / __gcd(lcm,cycleLength);	
		}
	}
	cout << lcm << endl;
	return 0;
}