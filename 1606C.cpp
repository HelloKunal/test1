#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


void solve() {
	int n, k; cin >> n >> k;
	k++;

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	for(int i = 0; i < n; i++) {
		a[i] = pow(10, a[i]);
	}

	int res = 0;
	for(int i = 0; i < n; i++) {
		int count = k;
		if(i + 1 < n) count = min(count, a[i+1]/a[i] - 1);
		res += count * a[i];
		k -= count;
	}

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