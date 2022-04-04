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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n, m; cin >> n >> m;
		unordered_set<int> us;
		for(int i = 1; i <= n; i++) us.insert(i);
		vector<vector<int>> b(m, vector<int> (3));
		for(int i = 0; i < m; i++) {
			cin >> b[i][0] >> b[i][1] >> b[i][2];
			us.erase(b[i][1]);
		}
		
		int center = *us.begin();
		for(int i = 1; i < center; i++) {
			cout << i << " " << center << "\n";
		}		
		for(int i = center+1; i <= n; i++) {
			cout << i << " " << center << "\n";
		}
	}
}


