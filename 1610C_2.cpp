#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

bool chk(int x, vi& a, vi& b, int n) {
	int c = 0;
	for(int i = 0; i < n; i++) {
		if(x - 1 - a[i] <= c && c <= b[i]) c++;
	}

	return c >= x;
}

void solve() {
	int n; cin >> n;
	vi a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	int l = -1, r = n+1, mid;
	while(r - l > 1) {
		mid = (l+r) >> 1;
		if(chk(mid, a, b, n)) l = mid;
		else r = mid;
	}

	cout << l;
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