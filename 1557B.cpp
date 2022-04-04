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
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		
		vector<int> sorted_a = a;
		sort(sorted_a.begin(), sorted_a.end());
		
		int i = 0;
		string res = "Yes";
		while(i < n) {
//			cout << i << "\n";
			auto j_lb = lower_bound(sorted_a.begin(), sorted_a.end(), a[i]);
			int j = j_lb - sorted_a.begin();
//			cout << j << "\n";
			
			while(i < n && j < n && a[i] == sorted_a[j]) {
				i++;
				j++;
			}		
			
			k--;
			if(k < 0) {
				res = "No";
				break;
			}
		}
		
		cout << res << "\n";
	}
}


