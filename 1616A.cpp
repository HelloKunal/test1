#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

void solve() {
	vector<int> v(101, 0);
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int t; cin >> t;
		v[abs(t)]++;
	}

	int res = 0;
	res += min(1, v[0]);
	for(int i = 1; i <= 100; i++) res += min(2, v[i]);
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