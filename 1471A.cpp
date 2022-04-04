#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n;
		long long int x;
		cin >> n >> x;
		long long int sum1 = 0, sum2 = 0;
		for ( int i = 0; i < n; i++ )
		{
			long long int t;
			cin >> t;
			sum1 += t;
			long double t1 = t * (1.0);
			t1 /= x;
			sum2 += ceil ( t1 );
		}
		
		double t2 = sum1 * 1.0;
		t2 /= x;
		sum1 = ceil ( t2 );
		cout << sum1 << " " << sum2 << "\n";
	
	}
}

