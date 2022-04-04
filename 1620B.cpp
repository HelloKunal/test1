#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int w, h; cin >> w >> h;
	int k;
	vector<int> temp;

	int res = 0;
	cin >> k;
	temp.resize(k);
	for(int i = 0; i < k; i++) {	
		cin >> temp[i];
	}
	if(temp.size() >= 2) {
		sort(temp.begin(), temp.end());
		int diff = temp[k-1] - temp[0];
		res = max(res, diff * h);
	}
	cin >> k;
	temp.resize(k);
	for(int i = 0; i < k; i++) {	
		cin >> temp[i];
	}
	if(temp.size() >= 2) {
		sort(temp.begin(), temp.end());
		int diff = temp[k-1] - temp[0];
		res = max(res, diff * h);
	}
	cin >> k;
	temp.resize(k);
	for(int i = 0; i < k; i++) {	
		cin >> temp[i];
	}
	if(temp.size() >= 2) {
		sort(temp.begin(), temp.end());
		int diff = temp[k-1] - temp[0];
		res = max(res, diff * w);
	}
	cin >> k;
	temp.resize(k);
	for(int i = 0; i < k; i++) {	
		cin >> temp[i];
	}
	if(temp.size() >= 2) {
		sort(temp.begin(), temp.end());
		int diff = temp[k-1] - temp[0];
		res = max(res, diff * w);
	}

	cout << res << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}