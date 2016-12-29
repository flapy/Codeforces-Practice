#include <iostream>
using namespace std;
int f[100005];
int k;
void init()
{
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 10000; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (f[i] >= 1000000000)
		{
		    k = i;
		    break;
		}
	}
}
int main() {
	init();
	int n;
	cin >> n;
	if (n == 2)
	{
	    cout << 2 << " " << 0 << " " << 0 << endl;
	}
	else if (n == 1)
	{
	    cout << 0 << " " << 0 << " " << 1 << endl;
	}
	else
	{
    	int ind  = lower_bound(f,f + k,n) - f;
    	cout << f[ind - 1] <<  " " << f[ind - 3] << " " << f[ind - 4] << endl;
	}
	return 0;
}