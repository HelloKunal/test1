#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n, m;
		cin >> n >> m;
		int A[n];
		long long B[n];
		for ( int i = 0; i < n; i++ )
		{
			cin >> A[i];
		}
		for ( int i = 0; i < m; i++ )
		{
			cin >> B[i];
		}
		
		sort ( A, A+n, greater<int>() );
		long long int sum = 0;
		for ( int i = 0; i < n; i++ )
		{
			int t = A[i];
			
			int j = 0;
			while ( B[j] < 0 )
			{
				j++;
				if ( j >= ( t - 1 ) || j >= m )
					break;
			}
			if ( j >= ( t - 1 ) || j >= m )
			{
				sum += abs( B[t-1] );
			}
			else
			{
				sum += B[j];
				B[j] = (-1) * B[j];
			}
		}
		cout << sum << "\n";
	}
}

