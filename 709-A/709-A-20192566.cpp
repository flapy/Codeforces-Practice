#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t=1;
    while(t--)
    {
        lli n,b,d;
        cin>>n>>b>>d;
        lli a;
        lli sum=0;
        lli cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<=b)
            {
                sum+=a;
            }
            if(sum>d)
            {
                sum=0;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}