#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    ios_base:: sync_with_stdio(false);
    int n,m,x;
    char c;
    cin>>n>>m;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='.' && s[i+1]=='.')
        {
            cnt++;
        }
    }
    int ans=cnt;
    while(m--)
    {
        cin>>x>>c;
        if(s[x-1]!='.' && c!='.')
        {
            s[x-1]=c;
            cout<<ans<<endl;
            continue;
        }
        else if(s[x-1]=='.' && c!='.')
        {
            if(s[x-2]=='.' && s[x]=='.' &&x>=2 && x<n)
            {
                ans-=2;
            }
            else if(s[x-2]=='.' &&x>=2)
            {
                ans--;
            }
            else if(s[x]=='.' && x<n)
            ans--;
            cout<<ans<<endl;
            s[x-1]=c;
            continue;
        }
        else if(s[x-1]=='.' && c=='.')
        {
            s[x-1]=c;
            cout<<ans<<endl;
            continue;
        }
        else if(s[x-1]!='.' && c=='.')
        {
            s[x-1]=c;
            if(s[x-2]=='.' && s[x]=='.' && x>=2 && x<n)
            {
                ans+=2;
            }
            else if(s[x]=='.' &&x<n)
            {
                ans++;
            }
            else if(s[x-2]=='.' && x>=2)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}