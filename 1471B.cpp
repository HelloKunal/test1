#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		queue<int> temp;
		int n,  op = 1;
		long long int x, sum = 0;
		cin >> n >> x;
		
		for ( int i = 0; i < n; i++ )
		{
			long long int t;
			cin >> t;
			sum += t;
			if ( op == 1 )
			{
				if ( t%x == 0 )
				{
					temp.push ( t/x );
					temp.push ( x );
						
				}
				else
				{
					op = 0;
				}
			}
		}
		while ( !temp.empty() )
		{
			long long t = temp.front();
			temp.pop();
			int y = temp.front();
			sum += ( t * y );
			temp.pop();
			if ( op == 1 )
			{
				if ( t%x == 0 )
				{
					temp.push ( t/x );
					temp.push ( y*x );
				}
				else
				{
					op = 0;
				}
			}
		}
		cout << sum << "\n";
	}
}

