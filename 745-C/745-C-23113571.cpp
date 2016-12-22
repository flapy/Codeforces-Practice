// Approach 2 using DSU
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
list <int> adj[1004];
int visit[1004];
int parent[1004];
int rnk[1004];
void init(int n)
{
	for (int i = 1; i <= n; i++)
	{
		parent[i] = i;
		rnk[i] = 1;
	}
}
void merge(int u,int v)
{
	if (rnk[u] > rnk[v])
		parent[v] = u;
	else
		parent[u] = v;
	if (rnk[u] == rnk[v])
		rnk[u]++;
}
int find(int u)
{
	if (u != parent[u])
	{
		parent[u] = find(parent[u]);
	}
	return parent[u];
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
		init(n);
		int u, v;
		int store = m;
		int compSize[1004] = {0};
		while (m--)
		{
			int u, v;
			cin >> u >> v;
			merge(find(u),find(v));
		}
		for (int i = 1; i <= n; i++)
			compSize[find(i)]++;
		
		m = store;
		int ans = 0;
		int maxCompSize = INT_MIN;
		int notGov = n;
		for (int i = 0 ; i < k; i++)
		{
			int siz = compSize[find(arr[i])];
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