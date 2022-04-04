#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N;
	cin >> N;
	int five = 0, zero = 0;
	for ( int i = 0; i < N; i++ )
	{
		int t;
		cin >> t;
		if ( t == 5 )
			five++;
		else
			zero++;			
	}
	
	if ( five >= 9 )
	{
		if ( zero >= 1 )
		{
			for ( int i = 0; i < five/9; i++ )
				cout << "555555555";
			for ( int i = 0; i < zero; i++ )
				cout << "0";
		}
		else
		{
			cout << "-1";
		}
	}
	else
	{
		if ( zero >= 1 )
			cout << "0";
		else
			cout << "-1";
	}
}
