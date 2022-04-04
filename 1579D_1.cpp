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
		multiset<pair<int, int>> m;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			if(t != 0) m.insert({t, i});
		}
		
		vector<vector<int>> res;
		while(m.size() > 1) {
			auto a = *m.begin(); m.erase(m.begin());
			auto b = *m.rbegin(); m.erase(prev(m.end()));
			
			res.push_back({a.second+1, b.second+1});
			
			a.first = a.first-1;
			b.first = b.first-1;
			if(a.first != 0) m.insert(a);
			if(b.first != 0) m.insert(b);
		}		
		
		cout << res.size() << "\n";
		for(auto r : res) {
			cout << r[0] << ' ' << r[1] << "\n";
		}
	}
}


