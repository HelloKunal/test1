#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int tests;
	cin >> tests;
	for (int test = 0; test < tests; test++)
	{
		long long int n, ans;
		cin >> n;
		if (n < 6)
			ans = 15;
		else if (n % 2 == 0)
			ans = (n / 2) * 5;
		else
			ans = ((n + 1) / 2) * 5;
		
		cout << ans << "\n";
	}
}

