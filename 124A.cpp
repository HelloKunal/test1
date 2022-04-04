#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int x, y, z;
	cin >> x >> y >> z;
	
	int ans = 0;
	for ( int i = y + 1; i <= x; i++ )
	{
		if (i >= x-z)
			ans++;
	}
	cout << ans;
}


