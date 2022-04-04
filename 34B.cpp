#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	int count = 0;
	int A[n];
	for ( int i = 0; i < n; i++ )
	{
		cin >> A[i];	
	}
	sort ( A, A+n );
	for ( int i = 0; i < n; i++ )
	{
		int t = A[i];
		if ( t >= 0 || count > m )
			break;
		
		ans -= t;
		count++;
	}
	cout << ans;
}

