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
		
		int res = 0;
		while(1) {
			bool sorted = true;
			for(int i = 1; i < n; i++) {
				if(a[i-1] > a[i]) {
					sorted = false;
					break;
				}
			}
			
			if(sorted) break;
			
			for(int i = 1; i <= n-1; i+=2) {
				if(a[i-1] > a[i]) swap(a[i-1], a[i]);
			}
			res++;
			
			sorted = true;
			for(int i = 1; i < n; i++) {
				if(a[i] < a[i-1]) {
					sorted = false;
					break;
				}
			}
			
			if(sorted) break;
			
			
			for(int i = 2; i <= n-1; i+=2) {
				if(a[i-1] > a[i]) swap(a[i-1], a[i]);
			}
			res++;
		}
		
		cout << res << "\n";
	}
}


