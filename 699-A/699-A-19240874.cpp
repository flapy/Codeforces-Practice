#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[n+2];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(s[i]=='L')
		{
			v.push_back(i);
		}
	}
	int ans=INT_MAX;
	int l=v.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			int ind=upper_bound(v.begin(),v.end(),i)-v.begin();
			if(ind<v.size())
			{
				ans=min(ans,(abs(a[i]-a[v[ind]]))/2);
			}
		}
		// if(s[i]=='L')
		// {
		// 	continue;
		// }
		// for(int j=i+1;j<n;j++)
		// {
		// 	if(s[i]=='R' &&s[j]=='L')
		// 	{
		// 		flag=true;
		// 		ans=min(ans,(abs(a[i]-a[j]))/2);
		// 		break;
		// 	}
		// }
		// // if(s[i]=='R' && flag==false)
		// // break;
	}
	cout<<(ans==INT_MAX?-1:ans)<<endl;
	return 0;
}