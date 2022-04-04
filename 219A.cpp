#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int k;
	cin >> k;
	string s;
	cin >> s;
	int ans = 0;
	string s1 = "";
	int n = s.length();
	int A[26] = {0};
	if ( n % k != 0 )
	{
		ans = 1;
	}
	else
	{
		for ( int i = 0; i < n; i++ )
		{
			A[s[i] - 97]++;
		}
		
		for ( int i = 0; i < 26; i++ )
		{
			if ( A[i] % k != 0 )
			{
				ans = 1;
				break;
			}
			int t = A[i] / k;
			char c = 97 + i;
			while ( t-- )
			{
				s1 += c;
			}
		}
	}
	
	if ( ans == 1 )
	{
		cout << -1;
	}
	else
	{
		for ( int i = 0; i < k; i++ )
		{
			cout << s1;
		}
	}
	
}

