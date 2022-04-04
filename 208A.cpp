#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
	cin >> s;
	string s1 = "";
	int x = 0;
	int y = 0;
	int n = s.length();
	for ( int i = 0; i < n; i++ )
	{
		if ( s[i] == 'W' )
		{
			if ( i > n-3 )
			{
				i+=2;
			}
			else if ( s[i+1] == 'U' )
			{
				if ( s[i+2] == 'B' )
				{
					i+=2;
					if ( y == 0 && x != 0 )
					{
						s1 += ' ';
						y++;
					}
				}
				else
				{
					s1 += 'W';
					s1 += 'U';
					s1 += s[i+2];
					i+=2;
					x++;
					y = 0;
				}
			}
			else
			{
				s1 += 'W';
				s1 += s[i+1];
				i+=1;
				x++;
				y = 0;
			}
		}
		else
		{
			s1 += s[i];
			x++;
			y = 0;
		}
	}
	
	cout << s1;
}

