#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


void solve() {
	int a, b; cin >> a >> b;
	int size = 0;
	string res = "";
	while(a > 0 && b > 0) {
		int c = (a % 10) + (b % 10);
		res += to_string(c);
		a /= 10;
		b /= 10;
	}
	while(a > 0) {
		res += to_string((a % 10));
		a /= 10;
	}
	while(b > 0) {
		res += to_string((b % 10));
		b /= 10;
	}
	reverse(res.begin(), res.end());
	cout << res << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}