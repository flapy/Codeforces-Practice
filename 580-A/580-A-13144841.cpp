#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    long long int a[100005];
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int cnt=1;
    long long int max=cnt;
    for(long long int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            cnt++;
            if(cnt>max)
            max=cnt;
        }
        else
        {
            cnt=1;
        }
    }
    cout<<max<<endl;
    return 0;
}