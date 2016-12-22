#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long long int n,i;
    cin>>n;
    long long int a[100005];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int j=0;
    long long int pos;
    long long int b[100005];
    for(i=1;i<n;i++)
    {
        if(a[i]>=a[0])
        b[j++]=a[i];
    }
    long long int ans=0;
    while(1)
    {
        bool flag=true;
        long long int max=a[0];
        for(i=0;i<j;i++)
        {
            if(b[i]>=max)
            {
                max=b[i];
                pos=i;
                flag=false;
            }
        }
        if(!flag)
        {
            a[0]++;
            b[pos]--;
            ans++;
        }
        if(flag)
        break;
    }
    cout<<ans;
    return 0;
}