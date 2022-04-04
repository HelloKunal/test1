#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = pow(10, 5) + 1;

int n, cnt[N], sz[N], color[N];
ll ans[N], res[N];
vector<int> adj[N], vec[N];

void update(int& mx, int v, int x) {
	ans[cnt[color[v]]] -= color[v];
	cnt[color[v]] += x;
	ans[cnt[color[v]]] += color[v];
	mx = max(mx, cnt[color[v]]);
}

int dfs(int v, int p = 0, bool keep = 0) {
	int mx = 0, Max = -1, bigchild = -1;
	for (auto u : adj[v]) {
		if (u != p && Max < sz[u]) {
			Max = sz[u];
			bigchild = u;
		}
	}
	for (auto u : adj[v]) {
		if (u != p && u != bigchild) {
			dfs(u, v, 0);
		}
	}
	if (bigchild != -1) {
		mx = max(mx, dfs(bigchild, v, 1));
		swap(vec[v], vec[bigchild]);
	}
	vec[v].push_back(v);
	update(mx, v, 1);
	for (auto u : adj[v]) {
		if (u != p && u != bigchild) {
			for (auto x : vec[u]) {
				update(mx, x, 1);
				vec[v].push_back(x);
			}
		}
	}
	res[v] = ans[mx];
	if (keep == 0) {
		for (auto u : vec[v]) {
			update(mx, u, -1);
		}
	}
	return mx;
}

void dfs_size(int v, int p = 0) {
	sz[v] = 1;
	for (auto u : adj[v]) {
		if (u != p) {
			dfs_size(u, v);
			sz[v] += sz[u];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> color[i];
	for(int i = 1, u, v; i < n; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs_size(1), dfs(1);
	for(int i = 1; i <= n; i++) {
		cout << res[i] << " ";
	}
}

