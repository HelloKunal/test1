#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a > b)
		{
			int t = b;
			b = a;
			a = t;		
		}
		
		int diff = a - b;
		
				
		int d;		
		if (c > a && c < b)
		{
			d = c + diff;
			if (d == b || d > b + diff - 1)
			{
				cout << "-1\n";
				continue;
			}
		}
		else
		{
			d = c - diff;
			if (d == a || d < a - (diff - 1) || d < 1)
			{
				cout << "-1\n";
				continue;				
			}
		}
		cout << d << "\n";
	}
}

