#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int n; cin >> n;
	vector<int> a(n);
	int allSum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		allSum += a[i];
	}
	sort(a.begin(), a.end());

	int m; cin >> m;
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		auto it = lower_bound(a.begin(), a.end(), x);
		int val1, val2 = -1;
		int res1 = 0, res2 = 0;
		if(it == a.end()) {
			res1 += x - a[n-1];
			val1 = a[n-1];
			auto it2 = lower_bound(a.begin(), a.end(), val1-1);
			if(*it2 >= a[0] && *it2 < val1) {
				val2 = *(it2);
				res2 += x - val2;
			}
		} else {
			val1 = *(it);
			// cout << val1 << " ";
			auto it2 = lower_bound(a.begin(), it-1, val1-1);
			// cout << it2 - a.begin() << " ";
			if(*it2 >= a[0] && *it2 < val1) {
				val2 = *(it2);
				// cout << val2 << " ";
				res2 += x - val2;
			}
		}

		if(allSum - val1 < y) {
			res1 += y - (allSum - val1);
		}
		if(val2 != -1 && allSum - val2 < y) {
			res2 += y - (allSum - val2);
		}

		if(val2 != -1) cout << min(res1, res2) << "\n";
		else cout << res1 << "\n";
	}
}

