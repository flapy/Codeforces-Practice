#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int w1,w2,d;
	w1=w2=d=0;
	for(int i=1;i<=6;i++)
	{
		int p1=abs(i-a);
		int p2=abs(i-b);
		if(p1<p2)
			w1++;
		else if(p2<p1)
			w2++;
		else
			d++;
	}
	cout<<w1<<" "<<d<<" "<<w2<<endl;
	return 0;
}