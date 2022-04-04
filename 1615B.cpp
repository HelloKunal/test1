#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

int getCount(int n, int k) {
	int res = (n >> (k + 1)) << k;
	if((n >> k) & 1) 
		res += n & ((1ll << k) - 1);
	return res;
}

void solve() {
	int l, r; cin >> l >> r;
	
	int maxCnt = 0;
	for(int i = 0; i <= 30; i++) {
		maxCnt = max(maxCnt, getCount(r+1, i) - getCount(l, i));
	}

	int res = (r - l + 1) - maxCnt;

	cout << res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;

	// vector<vector<int>> preSum(200001, vector<int> (20, 0));
	// for(int i = 1; i <= 200000; i++) {
	// 	for(int j = 1; j <= 18; j++) {
	// 		if(i << j == 1) preSum[i][j]++;
	// 	}
	// }


	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}