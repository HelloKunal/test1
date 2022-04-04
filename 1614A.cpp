#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, l, r, k; cin >> n >> l >> r >> k;
	vector<int> chocos;
	for(int i = 0; i < n; i++) {
		int t; cin >> t;
		if(t <= r && t >= l) chocos.push_back(t);
	}
	sort(chocos.begin(), chocos.end());

	int res = 0;
	for(auto i : chocos) {
		k -= i;
		if(k < 0) break;
		res++;
	}

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

