#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n, m;
	cin >> n >> m;
	int A = 1;
	long long int sum = 0;
	for ( int i = 0; i < m; i++ )
	{
		int B;
		cin >> B;
		if ( B < A )
		{
			sum += n + 1 - A;
			A = 1;
		}
		sum += B - A;
		A = B;
	}
	cout << sum;
}

