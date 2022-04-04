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
		vector<int> a;
		vector<int> res;
		int minPos = INT_MAX;
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			if(t <= 0) {
				res.push_back(t);
			}
			else {
				minPos = min(minPos, t);	
			}
		}
		
		sort(res.begin(), res.end());
		if(res.size() != 0) {
			bool flag = (minPos == INT_MAX) ? false : true;
			for(int i = 1; i < res.size(); i++) {
				if(res[i] - res[i-1] < minPos) {
					flag = false;
					break;
				}
			}
			
			if(flag) res.push_back(0);
		} else {
			res.push_back(0);
		}
		cout << res.size() << "\n";
	}
}


