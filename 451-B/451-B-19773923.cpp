#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	// your code goes here
	int n;
	cin>>n;
	pair<int,int> a[n+2];
	int b[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		b[i]=a[i].first;
		a[i].second=i;
	}
	sort(a,a+n);
	int cnt=0;
	bool flag=false;
	int st=-1;
	int end=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i].second!=i && !flag)
		{
			st=i;
			flag=true;
		}
		if(flag && a[i].second!=i)
		{
			end=i;
		}
	}
	if(st==-1)
	{
		cout<<"yes\n";
		cout<<1<<" "<<1<<endl;
		return 0;
	}
	if(end==-1)
	{
		end=n-1;
	}
	//cout<<st<<" "<<end<<endl;
	int lo=st;
	int hi=end;
	while(st<end)
	{
		swap(b[st],b[end]);
		st++;
		end--;
	}
	for(int i=1;i<n;i++)
	{
		if(b[i]<b[i-1])
		{
			cout<<"no\n";
			return 0;
		}
	}
	cout<<"yes\n";
	cout<<lo+1<<" "<<hi+1<<endl;
	return 0;
	return 0;
}