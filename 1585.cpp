#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> posArr;
	vector<int> negArr;
	for(int i = 0; i < n; i++) {
		int t; cin >> t;
		if(t > 0) posArr.push_back(t);
		else if(t < 0) negArr.push_back(t);
		else ;
	}

	sort(posArr.begin(), posArr.end());
	sort(negArr.begin(), negArr.end(), greater<int>());
	int res = 0;
	int posSize = posArr.size();
	int last = posSize-1;
	while(last >= 0) {
		res += 2*(abs(posArr[last]));
		last -= k;
	}
	// cout << res << "\n";

	int negSize = negArr.size();
	int last1 = negSize-1;
	while(last1 >= 0) {
		res += 2*(abs(negArr[last1]));
		last1 -= k;
	}
	// cout << res << "\n";

	last = posSize - 1;
	last1 = negSize - 1;
	if(last1 < 0 && last < 0) {
		res = 0;
	} else if(last1 < 0) {
		res -= abs(posArr[last]);		
	} else if(last < 0) {
		res -= abs(negArr[last1]);		
	} else if(abs(posArr[last]) > abs(negArr[last1])) {
		res -= abs(posArr[last]);
	} else {
		res -= abs(negArr[last1]);
	}
	cout << res;
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