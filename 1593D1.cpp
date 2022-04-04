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
		int lowest = INT_MAX;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			lowest = min(lowest, a[i]);
		}
		
		int final_gcd = INT_MIN;
		for(int i = 0; i < n; i++) {
			if(a[i] != lowest) {
				if(final_gcd == INT_MIN) {
					final_gcd = a[i] - lowest;
				} else {
					final_gcd = __gcd(final_gcd, a[i] - lowest);
				}
//				cout << final_gcd << "\n";
			}
		}
		
		if(final_gcd == INT_MIN) {
			cout << "-1\n";
		} else {
			cout << final_gcd << "\n";
		}
	}
}


