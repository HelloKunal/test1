#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

int power(int left, int right) {
	int res = 1;

	left = left % mod;
	if(left == 0) return 0;
	if(right == 0) return 1;

	while(right > 0) {

		if(right & 1) {
			res = (res * left) % mod;
		}

		left = (left * left) % mod;
		right = right >> 1;		
			
	}

	return res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n, m; cin >> n >> m;

		int res = power(2, n-1);
		// cout << res << "\n";
		int orAll = 0;
		for(int i = 0; i < m; i++) {
			int l, r, orHere; cin >> l >> r >> orHere;
			orAll = orAll | orHere;
		}
		res = (res * orAll) % mod;
		cout << res << "\n";
	}
}

