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
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int q; cin >> q;
		vector<pair<int, int>> queries(q);
		int maxQ = INT_MIN;
		for(int i = 0; i < q; i++) {
			cin >> queries[i].first;
			cin >> queries[i].second;
			maxQ = max(maxQ, queries[i].second);
		}
		
		vector<vector<int>> res(1);
		int lastC = maxQ;
		res[0] = a;
//		vector<int> temp(n);
		for(int j = 1; j <= maxQ; j++) {
			res.push_back(vector<int> (n));
			unordered_map<int, int> um;
			for(int i = 0; i < n; i++) {
				um[a[i]]++;
			}
			
			bool change = false;
			for(int i = 0; i < n; i++) {
				if(!change && a[i] != um[a[i]]) change = true;
				a[i] = um[a[i]];
				res[j][i] = a[i];
			}
			
			if(change == false)	{
				lastC = j;
				break;
			}
		}
		
		for(int i = 0; i < q; i++) {
			int thisq = queries[i].second;
			thisq = min(thisq, lastC);
			cout << res[thisq][queries[i].first - 1] << "\n";
		}
	}
}


