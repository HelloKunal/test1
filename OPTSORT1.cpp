#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int N; cin >> N;
	vector<int> a(N);
	vector<int> maxA(N, 0);
	int maxE = INT_MIN;
	for(int i = 0; i < N; i++) {
		cin >> a[i];
		maxE = max(maxE,a[i]);
		maxA[i] = maxE;
		// cout << maxA[i] << " ";
	}

	int minE = INT_MAX;
	vector<int> minA(N, 0);
	// cout << "\n";
	for(int i = N-1; i >= 0; i--) {
		minE = min(minE, a[i]);
		minA[i] = minE;
		// cout << minA[i] << " ";
	}

	int res1 = 0;
	maxE = a[N-1]	;
	for(int i = N-1; i >= 0; i--) {
		maxE = max(maxE, a[i]);
		if(minA[i] > (i? maxA[i-1] : 0)) {
			res1 += maxE - minA[i];
			maxE = INT_MIN;
		}
	}

	cout << res1;
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