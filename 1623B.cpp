#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> a(n, {0, 0});
	for(int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	vi ctr(n+1, 0);
	for(auto &p : a) {
		for(int i = p.first; i <= p.second; i++) {
			ctr[i]++;
		}
	}

	for(auto &p : a) {
		int v = min_element(ctr.begin() + p.first, ctr.begin() + p.second + 1) - ctr.begin();
		cout << p.first << " " << p.second << " " << v << "\n";
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        // cout << "\n";
	}
}