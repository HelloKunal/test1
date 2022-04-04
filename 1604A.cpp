#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	int j = 1;
	for(int i = 1; i <= n; i++, j++) {
		if(a[i-1] > j) {
			j += a[i-1] - j;
		}
	}

	j -= n+1;
	cout << j << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}