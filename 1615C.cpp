#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int n; cin >> n;
	string a, b; cin >> a >> b;
	if(a == b) {
		cout << 0;
		return;
	}

	int count1 = 0, count2 = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == '1') count1++;
		if(b[i] == '1') count2++;
	}
	if(count1 == 0 || count2 == 0) {
		cout << -1;
		return;
	}


	pair<int, int> e = {0, 0}, ne = {0, 0};
	for(int i = 0; i < n; i++) {
		if(a[i] == b[i]) {
			if(a[i] == '0') e.first++;
			else e.second++;
		} else {			
			if(a[i] == '0') ne.first++;
			else ne.second++;
		}
	}

	queue<pair<pair<int, int>, pair<int, int>>> q;
	map<pair<pair<int, int>, pair<int, int>>, bool> vis;
	q.push({e, ne});
	int lvl = 0;
	while(!q.empty()) {
		int sz = q.size();
		for(int i = 0; i < sz; i++) {
			auto curr = q.front(); q.pop();
			vis[curr] = true;

			e = curr.first;
			ne = curr.second;

			if(e.second == 1 && e.first == 0) {
				cout << lvl+1;
				return;
			}

			auto e_ = e, ne_ = ne; // copy
			if(e.second >= 1) {
				e.second--;
				swap(e.first, e.second);
				swap(ne.first, ne.second);
				swap(e, ne);
				e.second++;

				if(!vis.count({e, ne})) {
					q.push({e, ne});
				}
			}

			e = e_;
			ne = ne_;
			if(ne.second >= 1) {
				ne.second--;
				swap(e.first, e.second);
				swap(ne.first, ne.second);
				swap(e, ne);
				ne.second++;

				if(!vis.count({e, ne})) {
					q.push({e, ne});
				}
			}
		}

		lvl++;
	}

	cout << -1;
	return;
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