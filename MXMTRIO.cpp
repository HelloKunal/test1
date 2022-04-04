#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	sort(a.begin(), a.end(), greater<int>());
	int res = (a[0] - a[n-1]) * a[1];
	res = max(res, (a[1] - a[n-1]) * a[0]);

	cout << res;
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