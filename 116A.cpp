#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int x, xtemp;
	cin >> x >> x;
	xtemp = x;
	for ( int i = 1; i < N; i++ )
	{
		int temp;
		cin >> temp;
		xtemp -= temp;
		cin >> temp;
		xtemp += temp;
		
		if ( xtemp > x )
			x = xtemp;
	}
	
	cout << x << "\n";
}
