#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=8;
	map<char,int> lc;
	map<char,int> uc;
	lc['q']=9;
	lc['r']=5;
	lc['b']=3;
	lc['n']=3;
	lc['p']=1;

	uc['Q']=9;
	uc['R']=5;
	uc['B']=3;
	uc['N']=3;
	uc['P']=1;
	int ansl=0;
	int ansu=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int l=s.length();
		for(int j=0;j<l;j++)
		{
			ansl+=lc[s[j]];
			ansu+=uc[s[j]];
		}
	}
	if(ansu>ansl)
			cout<<"White\n";
	else if(ansl>ansu)
		cout<<"Black\n";
	else
		cout<<"Draw\n";
	return 0;
}