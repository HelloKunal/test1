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
		int prev, t;
		cin >> prev;
		cin >> t;
		int hill = 0;
		int valley = 0;
		int t3point = 0, t2point = 0, t1point = 0;
		int prevwhat = 0;
		for ( int i = 0; i < N-2; i++ )
		{
			int t1;
			cin >> t1;
			if ( t3point > 0 )
			{
				if ( t > prev && t > t1 )
				{
					hill++;
				}
				else if ( t < prev && t < t1 )
				{
					valley++;
				}
			}
			else
			{
				if ( t > prev && t > t1 )
				{
					hill++;
					if ( prevwhat == 3 )
					{
						t3point++;
					}
					else if ( prevwhat == 2 )
					{
						t2point++;
					}
					prevwhat = 1;
				}
				else if ( t < prev && t < t1 )
				{
					valley++;
					if ( prevwhat == 3 )
					{
						t3point++;
					}
					else if ( prevwhat == 2 )
					{
						t2point++;
					}
					prevwhat = 1;
				}
				else if ( t == prev && t == t1 )
				{
					if ( prevwhat == 2 )
					{
						t1point++;
					}
					else if ( prevwhat = 3 )
					{
						t2point++;
					}
					prevwhat = 0;
				}
				else if ( prev == t1 )
				{
					if ( prevwhat == 1 )
					{
						prevwhat = 3;
					}
					else if ( prevwhat == 0 )
					{
						prevwhat = 2;
					}
				}
				else
				{
					if ( prevwhat == 2 )
					{
						t1point++;
					}
					else if ( prevwhat = 3 )
					{
						t2point++;
					}
					
					prevwhat = 0;
				}
			}
			
			prev = t;
			t = t1;
		}
		int sum = 0;
		if ( t3point > 0 )
		{
			sum -= 3;
		}
		else if ( t2point > 0 )
		{
			sum -= 2;
		}
		else if ( t1point > 0 )
		{
			sum -= 1;
		}
		else
		{
			sum -= 1;
		}
		sum += hill + valley;
		cout << sum << "\n";
	}
}

