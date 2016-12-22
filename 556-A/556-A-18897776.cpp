#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	stack<char> s;
	for(int i=0;i<n;i++)
	{
		if(s.empty())
		{
			s.push(str[i]);
		}
		else
		{
			if(s.top()==str[i])
			{
				s.push(str[i]);
			}
			else
			{
				s.pop();
			}
		}
	}
	cout<<s.size()<<endl;
	return 0;
}