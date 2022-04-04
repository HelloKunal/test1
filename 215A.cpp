#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n;
	cin >> n;
	int A[n];
	for ( int i = 0; i < n; i++ )
	{
		cin >> A[i];
	}
	
	int m;
	cin >> m;
	int count = 0;
	int ans = 0;
	for ( int i = 0; i < m; i++ )
	{
		int t;
		cin >> t;
		for ( int j = 0; j < n; j++ )
		{
			double k = ( 1.0*t ) / A[j];
			double f3;
			if ( modf ( k, &f3 ) == 0.0 )
			{
				if ( k > ans )
				{
					ans = k;
					count = 1;	
				}
				else if ( k == ans )
				{
					count++;
				}	
			}				
		}
	}
	cout << count;
}

