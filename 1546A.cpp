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
		vector<int> a(n);
		vector<int> b(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		
		stack<pair<int, int>> stpos, stneg;
		int sum = 0;
		for(int i = 0; i < n; i++) {
			int diff = b[i] - a[i];
			if(diff > 0) stpos.push({diff, i});
			else if(diff < 0) stneg.push({diff, i});
			sum += diff;
		}
		
		if(sum != 0) {
			cout << "-1\n";
		} else {
			vector<pair<int, int>> res;
			while(!stpos.empty() && !stneg.empty()) {
				auto aa = stpos.top(); stpos.pop();
				auto bb = stneg.top(); stneg.pop();
//				cout << aa.first << " " << bb.first << "\n";
				
				if(abs(aa.first) <= abs(bb.first)) {
					int temp = aa.first;
//					cout << "here1\n";
//					if(a[bb.second] - temp < 0) {
//						temp = a[bb.second];
//						stpos.push({aa.first-temp, aa.second});
//					}
					for(int i = 0; i < abs(temp); i++) {
//					cout << "done1\n";
						res.push_back({bb.second, aa.second});
					}
					if(bb.first+temp != 0) stneg.push({bb.first+temp, bb.second});
				} else {
					int temp = bb.first;
//					cout << "here2\n";
//					if(a[bb.second] - temp < 0) {
//						temp = a[bb.second];
//						stpos.push({aa.first-temp, aa.second});
//					}
					for(int i = 0; i < abs(temp); i++) {
//					cout << "done2\n";
						res.push_back({bb.second, aa.second});
					}
					if(aa.first+temp != 0) stpos.push({aa.first+temp, aa.second});
				}
			}
			
			cout << res.size() << "\n";
			for(int i = 0; i < res.size(); i++) {
				cout << res[i].first+1 << ' ' << res[i].second+1 << "\n";
			}
		}
	}
}


