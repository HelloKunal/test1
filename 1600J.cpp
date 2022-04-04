#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif

int supertemp = 0;
void dfs(int curr, vector<bool> &vis, vector<int> adj[]) {
	vis[curr] = true;
	supertemp++;
	for(int next : adj[curr]) {
		if(!vis[next]) {
			dfs(next, vis, adj);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int n, m; cin >> n >> m;
	vector<vector<bitset<4>>> Arr(n, vector<bitset<4>> (m));
//	cout << n << " " << "\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int t; cin >> t;
			Arr[i][j] = bitset<4>(t);
//			cout << i << " " << j << "\n";
		}
	}
	
	vector<int> adj[n*m];
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(j != 0 && !Arr[i][j].test(0)) {
				if(!Arr[i][j-1].test(2)) { 
					adj[i*m + j].push_back(i*m + j - 1);
					adj[i*m + j - 1].push_back(i*m + j);
				}
			} 
			if(i != 0 && !Arr[i][j].test(3)) {
				if(!Arr[i-1][j].test(1)) {
					adj[i*m + j].push_back((i-1)*m + j);
					adj[(i-1)*m + j].push_back(i*m + j);
				}
			} 
			if(i != n-1 && !Arr[i][j].test(1)) {
				if(!Arr[i+1][j].test(3)) {
					adj[i*m + j].push_back((i+1)*m + j);
					adj[(i+1)*m + j].push_back(i*m + j);
				}
			} 
			if(j != m-1 && !Arr[i][j].test(2)) {
				if(!Arr[i][j+1].test(0)) {
					adj[i*m + j].push_back(i*m + j + 1);
					adj[i*m + j + 1].push_back(i*m + j);
				}
			} 
		}
	}
	
	vector<int> res;
	vector<bool> vis(n*m, false);
	for(int i = 0; i < n*m; i++) {
		supertemp = 0;
		if(!vis[i]) {
			dfs(i, vis, adj);
		}
		if(supertemp != 0) res.push_back(supertemp);
	}
	
	sort(res.begin(), res.end(), greater<int>());
	for(int t : res) cout << t << " ";
	cout << "\n";
}


