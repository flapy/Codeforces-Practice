#include <bits/stdc++.h>
using namespace std;
#define MAX INT_MAX
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	priority_queue<int, std::vector<int>, std::greater<int> > pq;
	vector<pair<string,int> > ans;
	while(n--)
	{
		string s;
		cin>>s;
		int x;
		if(s=="insert")
		{
			cin>>x;
			pq.push(x);
			ans.push_back({s,x});
		}
		else if(s=="getMin")
		{
			cin>>x;
			while(!pq.empty() && pq.top()<x)
			{
				pq.pop();
				ans.push_back({"removeMin",MAX});
			}
			if(pq.empty() || pq.top()>x)
			{
				pq.push(x);
				ans.push_back({"insert",x});
			}
			ans.push_back({s,x});
		}
		else
		{
			if(!pq.empty())
			{
				pq.pop();
			}
			else
				ans.push_back({"insert",0});
			ans.push_back({"removeMin",MAX});
		}
	}
	cout<<ans.size()<<endl;
	vector<pair<string,int> > ::iterator itr;
	for(itr=ans.begin();itr!=ans.end();itr++)
	{
		cout<<itr->first;
		if(itr->second!=MAX)
		cout<<" "<<itr->second;
		cout<<endl;
	}
	return 0;
}