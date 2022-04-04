#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<pair<int, int>> bCol(n);

		for(int i = 0; i < n; i++) {
			int k; cin >> k;
			ll int b = 0;
			for(int j = 0; j < k; j++) {
				ll int t; cin >> t;
				b = max(b, t - j);
			}

			bCol[i] = {b, k};
		}

		// for(int i = 0; i < n; i++) {
		// 	cout << bCol[i] << "\n";
		// 	cout << kArr[i] << "\n";
		// }
		sort(bCol.begin(), bCol.end(), cmp);
		ll int p = bCol[0].first;
		ll int k = 0;
		for(int i = 1; i < n; i++) {
			k += bCol[i-1].second;
			p = max(p, bCol[i].first - k);
		}

		cout << p+1 << "\n";
		// cout << "\n";
	}
}

