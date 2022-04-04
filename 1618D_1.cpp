#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	int res = 0;
	for(int i = 0; i < n - 2*k; i++) res += a[i];

	for(int i = n-2*k; i < n-k; i++) {
		res += a[i]/a[i+k];
	}

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