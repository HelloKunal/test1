#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	string s;
	cin >> s;
	
	int ans = 0;
	int n = s.length();
	n--;
	while ( n >= 0 )
	{
		if ( s[n] == '1' )
		{
			n--;
		}
		else if ( s[n] == '4' )
		{
			if ( n > 1 )
			{
				if ( s[n-1] == '4')
				{
					if ( s[n-2] == '1')
					{
						n -= 3;
					}
					else
					{
						ans = 1;
						break;
					}
				}
				else if ( s[n-1] == '1')
				{
					n -= 2;
				}
				else
				{
					ans = 1;
					break;
					
				}
			}
			else if ( n > 0 )
			{
				if ( s[n-1] == '1')
				{
					n -= 2;
				}
				else
				{
					ans = 1;
					break;
					
				}
			}
			else
			{
				ans = 1;
				break;
			}
		}
		else
		{
			ans = 1;
			break;
		}
	}
	
	if ( ans == 1 )
		cout << "NO";
	else
		cout << "YES";
	
}

