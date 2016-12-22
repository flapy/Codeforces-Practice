#include <bits/stdc++.h>
using namespace std;
bool visit[100005]={false};
int cnt=0;
void smash_dragon(int start,int end)
{
	for(int i=start;i<=end;i+=start)
	{
		if(!visit[i])
		{
			visit[i]=true;
			cnt++;
		}
	}
}
int main() {
	// your code goes here
	int t;
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	smash_dragon(k,d);
	smash_dragon(l,d);
	smash_dragon(m,d);
	smash_dragon(n,d);
	cout<<cnt<<endl;
	return 0;
}