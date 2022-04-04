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
		for(int i = 0; i < n; i++) cin >> a[i];
		
		vector<vector<int>> res;
		for(int i = n-1; i >= 0; i--) {
			int max_a = a[i], max_i = i;
			for(int j = i-1; j >= 0; j--) {
				if(a[j] > max_a) {
					max_a = a[j];
					max_i = j;
				}
			}
			
			if(max_i != i) {	
				for(int j = max_i; j < i; j++) {
					a[j] = a[j+1];
				}
				a[i] = max_a;
				
				res.push_back({max_i, i});
			}
		}
		
		if(res.size() == 0) cout << "0\n";
		else {
			cout << res.size() << "\n";
			for(vector<int> t : res) {
				cout << t[0]+1 << " " << t[1]+1 << " " << "1\n";
			}
//			for(int t : a) {
//				cout << t << " ";
//			}
//			cout << "\n";
		}
	}
}


