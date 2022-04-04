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
		
		
		long long int res = -1;
		for(int i = 0; i < n; i++) {
			int max_here = a[i];
			
			int min_here_1 = -1, min_here_2 = -1;
			for(int j = i-1; j >= 0; j--) {
				if(a[j] > a[i]) {
					min_here_1 = -1;
					break;
				} else if(a[j] == a[i]) {
					min_here_1 = a[i];
					break;
				} else {
					min_here_1 = a[j];
					break;
				}
			}
			for(int j = i+1; j < n; j++) {
				if(a[j] > a[i]) {
					min_here_2 = -1;
					break;
				} else if(a[j] == a[i]) {
					min_here_2 = a[i];
					break;
				} else {
					min_here_2 = a[j];
					break;
				}
			}
			
			long long int res_here;
			if(min_here_1 == -1 && min_here_2 == -1) res_here = max_here;
			else res_here = 1ll*max_here*max(min_here_1, min_here_2);
			res = max(res, res_here);
		}
		
		cout << res << "\n";
	}
}


