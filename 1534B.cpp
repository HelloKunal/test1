#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<ll int> a(n);
		ll int prev = 0;
		ll int res = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			res += abs(a[i] - prev);
			prev = a[i];
		}
		res += a[n-1];
		
		for(int i = 0; i < n; i++) {
			if(i == 0) {
				if(n == 1) {
					res -= a[i] - 0;
					break;
				}
				if(a[i] > a[i+1]) {
					res -= a[i] - a[i+1];
				}
			} else if(i == n-1) {
				if(a[i] > a[i-1]) {
					res -= a[i] - a[i-1];
				}
			} else {
				if(a[i] > a[i-1] && a[i] > a[i+1]) {
					res -= a[i] - max(a[i+1], a[i-1]);
				}
			}
		}
		
		cout << res << "\n";
	}
}


