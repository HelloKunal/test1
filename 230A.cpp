#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int s, n;
	cin >> s >> n;
	int ans = 0;
	for ( int i = 0; i < n; i++ )
	{
		int x, y;
		cin >> x >> y;
		if ( s <= x )
		{
			ans = 1;
			break;
		}
		else
		{
			s += y;
		}
	}
	
	if ( ans == 1 )
		cout << "NO";
	else
		cout << "YES";
	
}


