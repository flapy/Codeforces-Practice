//Help From Editorial
#include <iostream>
using namespace std;
bool foo(int m,int s)
{
	if(m*9<s || s<0)
	{
		return false;
	}
	return true;
}
string minMaxNum(int m,int s,int st,int inc)
{
	string ans="";
	
	for(int i=0;i<m;i++)
	{
		for(int j=st;j>=0 && j<=9;j+=inc)
		{
			if(i==0 && j==0)
				continue;
			if(foo(m-i-1,s-j))
			{
				ans+=to_string(j);
				s-=j;
				break;
			}
		}
	}
	return ans==""?"-1":ans;
}

int main() {
	// your code goes here
	int m,s;
	cin>>m>>s;
	if(m==1 && s==0)
	{
		cout<<"0"<<" "<<0<<endl;
		return 0;
	}
	if(s==0 && m!=1 || 9*m<s)
	{
		cout<<-1<<" "<<-1<<endl;
		return 0;
	}
	cout<<minMaxNum(m,s,0,1)<<" ";
	cout<<minMaxNum(m,s,9,-1)<<" ";
	return 0;
}