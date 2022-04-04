#include <bits/stdc++.h>
using namespace std;

int sum ( int A1, int A2, int A3 )
{
	int ans = (((2*(A1+A2+A3))-(2*A3))/pow ((A1*A2)/A3, 0.5));
	return ans;
}

int main ( void )
{
	int A1, A2, A3;
	cin >> A1 >> A2 >> A3;
	int ans = 0;
	ans += sum ( A1, A2, A3 );
	ans += sum ( A3, A1, A2 );
	ans += sum ( A2, A3, A1 );
	cout << ans;
}
