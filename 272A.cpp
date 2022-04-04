#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int testc;
	cin >> testc;
	int N = testc;
	int F = 0;
	while ( testc-- )
	{
		int temp;
		cin >> temp;
		F += temp;
	}
	
	int ans = -1;
	for ( int i = 1; ans <= 0; i++ )
	{
		ans = 1 + i*(N+1) - F;
	}
	ans++;
	cout << ans;
}
