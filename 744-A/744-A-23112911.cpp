#include <bits/stdc++.h>
using namespace std;
#define lli long long int
list <int> adj[1004];
int visit[1004];	
int  bfs(int u)
{
	queue <int> q;
	visit[u] = u;
	q.push(u);
	int cnt = 1;
	while (!q.empty())
	{
		int v = q.front();
		list <int> :: iterator itr;
		for (itr = adj[v].begin(); itr != adj[v].end(); itr++)
		{
			if (!visit[*itr])
			{
				cnt++;
				q.push(*itr);
				visit[*itr] = u;
			}
		}
		q.pop();
	}
	return cnt;
}
int countAllEdges(int k)
{
	return ((k * (k - 1)) / 2);
}
int main()
{
    ios_base :: sync_with_stdio(false);
	int t = 1;
	while (t--)
	{
		int n, m , k;
		cin >> n >> m >> k;
		int arr[k + 2];
		for (int i = 0; i < k; i++)
		{
			cin >> arr[i];
		}
		int u, v;
		int store = m;
		while (m--)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		m = store;
		int compSize[1004];
		int id = 1;
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i])
			{
				compSize[i] = (bfs(i));
			}
			else
			{
				compSize[i] = compSize[visit[i]];
			}
			// cout << compSize[i] << " ";
		}
		// cout << endl;
		int ans = 0;
		int maxCompSize = INT_MIN;
		int notGov = n;
		for (int i = 0 ; i < k; i++)
		{
			int siz = compSize[arr[i]];
			// cout << siz << " ";
			maxCompSize = max(maxCompSize,siz);
			ans += countAllEdges(siz); 
			notGov -= siz;
		}
		ans -= countAllEdges(maxCompSize);
		ans += countAllEdges(maxCompSize + notGov);
		ans -= m;
		cout << ans << endl;
	}
	return 0;
}