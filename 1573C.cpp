#include <bits/stdc++.h>
using namespace std;

bool isCycleUtil(vector<int> adj[], int v, vector<bool> &visited, vector<bool> &recVis) {
	if(visited[v] == false) {
		visited[v] = true;
		recVis[v] = true;
		
		for(int i : adj[v]) {
			if(!visited[i] && isCycleUtil(adj, i, visited, recVis)) return true;
			else if(recVis[i]) return true;
		}
	}
	recVis[v] = false;
	return false;
}

int main ( void )
{
	int testc;
	cin >> testc;
	while ( testc-- )
	{
		int n; cin >> n;
		vector<bool> dp(n+1, 0);
		vector<int> adj[n+1];
		int read = 0;
		
		for(int i = 1; i <= n; i++) {
			int k; cin >> k;
			if(k == 0) {
				read++;
				dp[i] = 1;
			} else {
				for(int j = 0; j < k; j++) {
					int t; cin >> t;
					adj[i].push_back(t);
				}
			}
		}
		
		if(read == 0) {
			cout << "-1\n";
		} else {
			// check loop
			vector<bool> visited(n, false), recVis(n, false);
			bool cyclic = false;
			for(int i = 1; i <= n; i++) {
				if(isCycleUtil(adj, i, visited, recVis)) {
					cyclic = true;
					break;
				}
			}
			
			if(cyclic) {
				cout << "-1\n";				
			} else {
				int res = 1;
				for(int i = 1; i <= n; i++) {
					if(dp[i] == true) continue;
					else {
						int size = adj[i].size();
						for(int j = 0; j < size; j++) {
							if(dp[adj[i][j]] == true) {
								adj[i].erase(adj[i].begin()+j);
								size--;
								j--;
							}
						}
						if(size == 0) dp[i] = true;
					}
					
					if(i == n-1) {
						res++;
						i = -1;
					}
				}
				
				cout << res << "\n";
			}
		}
	}
}

