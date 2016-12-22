#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,k,ans,w;
        long long int pos;
    cin>>n>>m;
    map<long long int,long long int> ma;
    for(long long int i=0;i<m;i++)
    {
        for(long long int j=1;j<=n;j++)
        {
            cin>>k;
            if(j==1)
            {
                w=k;
                pos=j;
            }
            else
            {
                if(k>w)
                {
                    w=k;
                    pos=j;
                }
            }
        }
        ma[pos]++;
        
    }
    for(long long int i=1;i<=n;i++)
    {
        if(i==1)
        {
            ans=ma[i];
            pos=i;
        }
        else
        {
            if(ma[i]>ans)
            {
                ans=ma[i];
                pos=i;
            }
        }
    }
    cout<<pos;
    return 0;
}