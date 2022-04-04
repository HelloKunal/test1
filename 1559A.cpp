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
		int res;
		for (int i = 0; i < n; i++)
		{
			int t;
			cin >> t;
			if (i == 0)
				res = t;
			else
			{
				res = res & t;
			}
		}
		
		cout << res << "\n";
	}
}

