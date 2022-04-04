#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	double n, m;
	cin >> n >> m;
	int ans = 0;
	for ( int i = 0; i <= n; i++ )
	{
		double t = pow ( n - i, 0.5 );
		double t1 = t + pow ( i, 2);
		if ( t1 == m )
		{
			double t2;
			if ( modf ( t, &t2 ) == 0.0 )
				ans++;
		}
	}
	cout << ans; 
}


