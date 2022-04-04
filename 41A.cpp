#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s, st;
	cin >> s >> st;
	string s1 = "";
	int n = s.length();
	n--;
	while ( n >= 0 )
	{
		s1 += s[n--];
	}
	
	
	if ( s1 == st )
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

