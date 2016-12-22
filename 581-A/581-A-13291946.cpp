#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        cout<<a<<" ";
        b=(b-a)/2;
        cout<<b<<endl;
    }
    else
    {
        cout<<b<<" ";
        a=(a-b)/2;
        cout<<a<<endl;
    }
    return 0;
}