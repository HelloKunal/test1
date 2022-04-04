#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int maxE = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		maxE = max(maxE, a[i]);
	}

	int last = n-1;
	int res = 0;
	while(1) {
		int i = last-1;
		while(i >= 0 && a[i] <= a[last]) i--;

		if(i >= 0) {
			res++;
			if(a[i] == maxE) {
				cout << res;
				return;
			}

			last = i;
		} else {
			cout << res;
			return;
		}
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