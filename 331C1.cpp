#include <bits/stdc++.h>
using namespace std;

int main ( void )
{
	long long int n; cin >> n;
	int res = 0;
	while(n != 0) {
		long long int t = n;
		long long int max_digit = 0;
		while(t != 0) {
			max_digit = max(max_digit, t % 10);
			if(max_digit == 9) break;
			t /= 10;
		}
		
		res++;
		n -= max_digit;
	}
	
	cout << res << "\n";
}


