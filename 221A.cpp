#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	
	if ( N == 1 )
	{
		cout << 1;
	}
	else
	{
		cout << N << " ";
		for ( int i = 1; i < N; i++ )
		{
			cout << i << " ";
		}
	}
}

