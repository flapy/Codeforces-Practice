#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<n;
    }
    else
    {
        int pos1=m-1;
        int pos2=n-m;
        if(pos1 && pos2)
        {
            if(pos1>=pos2)
            {
                cout<<m-1;
            }
            else
            {
                cout<<m+1;
            }
        }
        else if(pos2)
        {
            cout<<m+1;
        }
        else
        {
            cout<<m-1;
        }
    }
    return 0;
}