#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		
		char prev = '.';
		bool onlyq = true;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '?')
			{
				if (prev != '.')
				{
					prev = (prev == 'B') ? 'R' : 'B';
					s[i] = prev;
				}				
			}
			else
			{
				prev = s[i];
				onlyq = false;
			}
		}
		
		prev = '.'; 
		if (onlyq == true)
			prev = 'B';
		for (int i = n - 1; i >= 0; i--)
		{
			if (s[i] == '?')
			{
				if (prev != '.')
				{
					prev = (prev == 'B') ? 'R' : 'B';
					s[i] = prev;
				}				
			}
			else
			{
				prev = s[i];
			}			
		}
		
		
		cout << s << "\n";
	}
	
}

