#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

vi a(100001);
int n;

bool chk(int x) {
	vi curr_h(a.begin(), a.end());
	for(int i = n-1; i >= 2; i--) {
		if(curr_h[i] < x) return false;
		int d = min(curr_h[i], curr_h[i] - x) / 3;
		curr_h[i-1] += d;
		curr_h[i-2] += 2*d;
	}
	return curr_h[0] >= x and curr_h[1] >= x;
}

void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int first = 0, last = *max_element(a.begin(), a.end());
	while(first < last) {
		int mid = (first + last) / 2;
		if(chk(mid)) {
			first = mid;
		} else {
			last = mid - 1;
		}
	}

	cout << last;
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