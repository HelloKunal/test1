#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int n; cin >> n;
	int maxa = 0;
	int res = 0;
	int twos = 0;
	for(int i = 0; i < n; i++) {
		int t; cin >> t;
		while(t % 2 == 0) {
			twos++;
			t /= 2;
		}
		maxa = max(maxa, t);
		res += t;
	}

	res -= maxa;
	res += maxa*pow(2, twos);
	cout << res << "\n";
}

int32_tn main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}