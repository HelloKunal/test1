#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	ll n; cin >> n;
	ll squares = floor(sqrt(n));
	ll cubes = floor(cbrt(n));
	int count = 0;
	for(ll int i = 1; pow(i, 6) <= n; i++) {
		count++;
	}
	// cout << sub << "\n";
	ll res = squares + cubes - count;
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