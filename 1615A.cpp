#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	if(sum % n == 0) cout << 0;
	else cout << 1;
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