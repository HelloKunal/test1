#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int s = 0, j = 0;
	int N1[ 3 ];
	for ( int i = 0; i < 3; i++ )
	{
		int temp;
		cin >> temp;
		if ( temp == N )
		{
			s++;
		}
		else
		{
			N1[ j++ ] = temp;
		}
	}
	
	if ( s == 3 )
	{
		cout << "3\n";
	}
	else if ( s == 2 )
	{
		cout << "2\n";
	}
	else if ( s == 1 )
	{
		if ( N1[ 0 ] == N1[ 1 ] )
		{
			cout << "2\n";
		}
		else
		{
			cout << "1\n";
		}
	}
	else
	{
		
	}
}
