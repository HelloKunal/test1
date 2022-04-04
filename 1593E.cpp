#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, k; cin >> n >> k;
	vector<vector<int>> graph(n);

	for(int i = 0; i < n-1; i++) {
		int u, v; cin >> u >> v;
		u--, v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	vector<int> level(n, -1), deg(n);
	queue<int> q;
	for(int i = 0; i < n; i++) {
		deg[i] = graph[i].size();
		if(deg[i] == 1) {
			level[i] = 1;
			q.push(i);
		}
	}

	while(!q.empty()) {
		int u = q.front(); q.pop();
		for(int v : graph[u]) {
			if(level[v] == -1) {
				deg[v] -= 1;
				if(deg[v] == 1) {
					level[v] = level[u] + 1;
					q.push(v);
				}
			}
		}
	}

	int res = 0;
	for(int i = 0; i < n; i++) {
		res += level[i] > k;
	}

	cout << res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		string s;
		getline(cin, s);
		solve();
        cout << "\n";
			// cout << "\n";	
	}
}