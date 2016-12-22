#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,v;
	cin>>n>>v;
	vector<int> ve;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		int val;
		bool flag=false;
		for(int j=0;j<k;j++)
		{
			cin>>val;
			if(val<v)
			{
				flag=true;
			}
		}
		if(flag)
		{
			ve.push_back(i+1);
		}
	}
	cout<<ve.size()<<endl;
	for(int i=0;i<ve.size();i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}