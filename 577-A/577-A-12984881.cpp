#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;
    long long int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(i>x)
        break;
        if(x%i==0 && x/i<=n)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}