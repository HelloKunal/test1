#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
	cin >> s;
	string s1 = "";
	int n = s.length();
	
	for ( int i = 0; i < n; i++ )
	{
		char c = s[i];
		char c1 = tolower(c);
		if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u' || c1 == 'y')
		{
			
		}
		else
		{
			s1 += ".";
			s1 += c1;
		}
	}
	
	cout << s1;
}

