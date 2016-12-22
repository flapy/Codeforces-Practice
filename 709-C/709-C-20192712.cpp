#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t=1;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        int subStart=false;
        for(int i=0;i<l;i++)
        {
            if(!subStart)
            {
                if(s[i]=='a')
                    continue;
                else
                {
                    subStart=true;
                    s[i]-=1;
                }
            }
            else
            {
                if(s[i]=='a')
                    break;
                else
                    s[i]-=1;
            }
        }
        if(subStart)
            cout<<s<<endl;
        else
        {
            s[l-1]='z';
            cout<<s<<endl;
        }
    }
    return 0;
}