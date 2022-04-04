#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		ll int n, x, t;
		cin >> n >> x >> t;
		
		ll int count;
		if (t >= (n - 1) * x)
		{
			count = n - 1;
		}
		else
		{
			count = (t / x);	
		}
		ll int sum = 0;
		sum += ((count - 1) * (count)) / 2;
		n -= count;
		sum += (n * count);
		
		cout << sum << "\n";
	}
}

