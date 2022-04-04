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
		int n; cin >> n;
		priority_queue<pair<int, int>> pq;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			if(t != 0) {
				pq.push({t, i});
			}
		}
		
		vector<vector<int>> res;
		while(pq.size() > 1) {
			auto A = pq.top();
			pq.pop();
			auto B = pq.top();
			pq.pop();
			
			int C = max(A.first, B.first) - min(A.first, B.first);
			if(C != 0) {
				pq.push(	C);
			}	
			res.push_back({A.second, B.second, min(A.first, B.first)});
		}		
		
		if(res.size() == 0) cout << "0\n";
		else {
			cout << res.size() << "\n";
			for(vector<int> t : res) {
				for(int i = 0; i < t[2]; i++) {
					cout << t[0] << " " << t[1] << "\n";
				}
			}
		}
	}
}


