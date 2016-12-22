#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base:: sync_with_stdio(false);
    // your code goes here
    int t,s,q;
    cin>>t>>s>>q;
    int cur=0;
    int done=s;
    int ans=1;
    while(s<t)
    {
        cur+=q;
        done+=q-1;
        if(done>=t)
        {
            break;
        }
        if(cur>=done)
        {
            ans++;
            cur=0;
            continue;
        }
    }
    cout<<ans<<endl;
    return 0;
}