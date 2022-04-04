#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


void solve() {
	int x, y; cin >> x >> y;
	if(x > y) cout << x+y;
	else {
		cout << y - ((y % x) / 2);
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
		cout << "\n";
	}
}