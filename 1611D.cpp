#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {	
		int n; cin >> n;
		vector<int> b(n+1);
		vector<int> p(n+1);
		vector<int> dist(n+1, -1);
		for(int i = 1; i <= n; i++) cin >> b[i];
		for(int i = 1; i <= n; i++) cin >> p[i];

		if(b[p[1]] != p[1]) {
			cout << "-1\n";
			return;
		}

		dist[p[1]] = 1;
		for(int i = 2; i <= n; i++) {
			if(dist[b[p[i]]] == -1) {
				cout << "-1\n";
				return;				
			}
			dist[p[i]] = dist[p[i-1]] + 1;
		}

		for(int i = 1; i <= n; i++) {
			cout << dist[i] - dist[b[i]] << " ";
		}
		cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}	
}

