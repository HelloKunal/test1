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
		int minE = INT_MAX;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			minE = min(minE, a[i]);
		}
 

		int req = n/2;
		for(int i = 0; i < n; i++) {
			if(a[i] == minE) continue;

			cout << a[i] << ' ' << minE << '\n';
			if(--req <= 0) break;
		}
	}
}
 