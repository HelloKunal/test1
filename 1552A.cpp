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
		
		
		int count = 0;
		string st = s;	
		sort (s.begin(), s.end());
		
		for (int i = 0; i < n; i++)
		{
			if (s[i] != st[i])
				count++;
		}
		
		cout << count << "\n";
	}
}


