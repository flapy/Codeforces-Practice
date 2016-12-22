#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	pair<int,int> a[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		a[i].second=i+1;
	}
	int sum=0;
	sort(a,a+n);
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		sum+=a[i].first;
		if(sum<=k)
		{
			v.push_back(a[i].second);
		}
		else
			break;
	}
	cout<<v.size()<<endl;
	vector<int> ::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<*itr<<" ";
	cout<<endl;
	return 0;
}