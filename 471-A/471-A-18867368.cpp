//My Internet Would screw me UP!!
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	map<int,int> m;
	m[a]++;
	m[b]++;
	m[c]++;
	m[d]++;
	m[e]++;
	m[f]++;
	bool flag=false;
	map<int,int> ::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		if(itr->second>=4)
		{
			m[itr->first]-=4;
			flag=true;
			break;
		}
	}
	if(!flag)
	{
		cout<<"Alien\n";
		return 0;
	}
	else
	{
		bool flag=false;
		map<int,int> ::iterator itr;
		for(itr=m.begin();itr!=m.end();itr++)
		{
			if(itr->second>=2)
			{
				flag=true;
				break;
			}
		}
		if(flag)
			cout<<"Elephant\n";
		else
			cout<<"Bear\n";
	}
}