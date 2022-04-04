#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		
		int max_value = INT_MIN;
		for (int i = n; i > 0; i--)
		{
			for (int j = i - 1; j > 0; j--)
			{
				int t = a[i] | a[j];
				max_value = max (max_value, (i * j - k * t));
				if (t == 0)
					break;
			}
		}
		
		cout << max_value << "\n";
	}
}

