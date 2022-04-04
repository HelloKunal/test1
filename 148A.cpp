#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int k, l, m, n, d;
        cin >> k >> l >> m >> n >> d;
        int sum = 0;
        for ( int i = 1; i <= d; i++ )
        {
                if ( i % k == 0 )
		       sum++;
                else if ( i % l == 0 )
		       sum++;
                else if ( i % m == 0 )
		       sum++;
                else if ( i % n == 0 )
		       sum++;
        }

        cout << sum;
}
