#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int a, b; cin >> a >> b;
	int start = 0, end = min(a, b) + 1;
	while(start < end - 1) {
		int mid = (start + end) / 2;

		int leftA = a - mid;
		int leftB = b - mid;
		if(leftA + leftB >= 2*mid) {
			start = mid;
		} else end = mid;
	}

	cout << start << "\n";
	// cout << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

