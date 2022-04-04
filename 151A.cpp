#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	int A = (k * l)/nl;
	int B = c * d;
	int C = p/np;
	
	int D = min (A, B);
	D = min (D, C);
	D /= n;
	cout << D << "\n";
}
