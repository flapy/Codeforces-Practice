#include<bits/stdc++.h>
using namespace std;
bool primes[52]={false};
vector<int> prime;
void pri(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!primes[i])
		{
			prime.push_back(i);
			int j=1;
			while(i*j<=n)
			{
				primes[i*j]=true;
				j++;
			}
		}
	}
}
int main()
{
	pri(50);
	vector<int> ::iterator itr;
	int cnt=0;
	string str;
	for(itr=prime.begin();itr!=prime.end();itr++)
	{
		cout<<*itr<<endl;
		cin>>str;
		if(str=="yes")
		{
			cnt++;
			if((*itr)*(*itr)<=50)
			{
				cout<<(*itr)*(*itr)<<endl;
				cin>>str;
				if(str=="yes")
				{
					cnt++;
					break;
				}
			}
		}
	}
	if(cnt<2)
		cout<<"prime";
	else
	cout<<"composite";
	fflush(stdout);
	return 0;
}