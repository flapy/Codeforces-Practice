#include <iostream>
using namespace std;
void toLower(string s)
{
	int l=s.length();
	for(int i=0;i<l;i++)
		cout<<(char)tolower(s[i]);
	cout<<endl;
}
void toUpper(string s)
{
	int l=s.length();
	for(int i=0;i<l;i++)
		cout<<(char)toupper(s[i]);
	cout<<endl;
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	int low,upp;
	low=upp=0;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]<=122 && s[i]>=97)
			low++;
		else
			upp++;
	}
	low>=upp?toLower(s):toUpper(s);
}