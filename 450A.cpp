#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int N, m;
	cin >> N >> m;
	
	int kmax = -1;
	int lastchilde = 0;
	for ( int i = 1; i <= N; i++ )
	{
		int temp;
		cin >> temp;
		if ( m >= temp )
		{
			
		}
		else
		{
			int t = (temp%m == 0)? 0: 1;
			int k = temp/m + t;
			if ( k >= kmax )
			{
				kmax = k;
				lastchilde = i;
			}
		}
	}
	
	if ( kmax == -1 )
		cout << N;
	else
		cout << lastchilde;
}
