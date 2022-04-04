#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
	cin >> s;
	string s1 = "";
	int n = s.length();
	
	int x = 0, ans = 0;
	char c = s[0];
	x++;
	for ( int i = 1; i < n; i++ )
	{
		if ( c == s[i] )
		{
			x++;
			if ( x >= 7 )
			{
				ans = 1;
			}
		}	
		else
		{
			c = s[i];
			x = 1;
		}
	}
	
	if ( ans == 1 )
		cout << "YES";
	else
		cout << "NO";
}

