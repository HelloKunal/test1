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
	ll mod = pow(10, 9) + 7;
	for(int test = 0; test < tests; test++) {
		int n, k; cin >> n >> k;
		ll res = 0, temp = 1;
		bool over = false;
		while(k > 0) {
			int l = floor(log2(k));
//			cout << k << "\n";
			k -= pow(2, l);
			long long temp = 1;
			for(int i = 0; i < l; i++) {
				temp = (temp*n) % mod;
			}
			res = (res + temp) % mod;
		}
		
		cout << res << "\n";
	}
}


