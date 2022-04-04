#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int c, d, x; cin >> c >> d >> x;
	
	bool posiB = false;
	while(c > 0 & d > 0) {			
		int a = max(c, d);
		int b = min(c, d);

		if(x > a) {
			break;
		}
		if(a == x || b == x) {
			posiB = true;
			break;
		}

		int cnt = max(1ll, (a - max(b, x)) / (2*b));
		c = a - b*cnt;
		d = b;
	}

	if(posiB) cout << "YES\n";
	else cout << "NO\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

