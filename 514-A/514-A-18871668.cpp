#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int net=pow(2,s.length());
	int l=s.length();
	set<string> se;
	for(int i=0;i<net;i++)
	{
		string temp=s;
		for(int j=0;j<l;j++)
		{
			if(i & 1<<j)
			{
				temp[j]=57-temp[j]+48;
			}
		}
		if(temp[0]!='0')
		se.insert(temp);
	}
	cout<<*(se.begin())<<endl;
}