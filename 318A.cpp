#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	long long int n, k, nb2, ans = 0;
	cin >> n >> k;
	if ( n & 1 == 0 )
		nb2 = n / 2;
	else
		nb2 = ( n + 1 ) / 2;
	
	if ( k <= nb2 )
		ans = (2*k)-1;
	else
		ans = 2*( k-nb2 );
		
	cout << ans;
}

