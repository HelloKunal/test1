#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	int ans = 0;
	while ( testc-- )
	{
		int t1, t2, t3;
		cin >> t1 >> t2 >> t3;
		ans += ( t1 + t2 + t3 ) >= 2? 1: 0;
	}
	cout << ans;
}
