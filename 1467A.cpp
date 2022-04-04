#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int N;
		cin >> N;
		
		if ( N >= 3 )
		{
			cout << "989";
			int j = 0;
			for ( int i = 0; i < N-3; i++ )
			{
				cout << j;
				j++;
				if ( j == 10 )
				{
					j = 0;
				}
			}
		}
		else if ( N == 2)
		{
			cout << "98";
		}
		else
		{
			cout << "9";
		}
		
		cout << "\n";
			
	}
}

