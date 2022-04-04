#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n;
		cin >> n;
		
		string b, a = "";
		cin >> b;
		char prev;
		if ( b[0] == '0' )
		{
			a += '1';
			prev = '1';
		}
		else
		{
			a += '1';
			prev = '2';
		}
		for ( int i = 1, y = b.length(); i < y; i++ )
		{
			char t = b[i];
			if ( prev == '0' )
			{
				if ( t == '0' )
				{
					a += '1';
					prev = '1';
				}
				else
				{
					a += '1';
					prev = '2';
				}	
			}
			else if ( prev == '1' )
			{
				if ( t == '0' )
				{
					a += '0';	
					prev = '0';				
				}
				else
				{
					a += '1';
					prev = '2';
				}	
			}
			else
			{
				if ( t == '0' )
				{
					a += '1';	
					prev = '1';				
				}
				else
				{
					a += '0';
					prev = '1';
				}
			}
		}
		cout << a << "\n";
	}
}

