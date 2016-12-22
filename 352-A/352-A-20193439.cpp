#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int a;
        int cntFive,cnt0;
        cntFive=cnt0=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==5)
                cntFive++;
            else
                cnt0++;
        }
        int extra=cntFive%9;
        cntFive-=extra;
        if(cntFive && cnt0)
        {
            for(int i=0;i<cntFive;i++)
            cout<<5;
            for(int i=0;i<cnt0;i++)
            cout<<0;
            cout<<endl;
        }
        else if(cnt0)
            cout<<0<<endl;
        else 
        cout<<-1<<endl;
    }
    return 0;
}