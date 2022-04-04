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

ll natSum(ll x) {
	return x*(x+1)*0.5;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		ll int k, x; cin >> k >> x;
		ll left = 1, right = 2*k - 1;
		ll res = 2*k - 1;
		bool over = false;
		while(left <= right) {
			ll mid = (left + right) >> 1;
			if(mid >= k) {
				over = (natSum(k) + natSum(k-1) - natSum(2*k - 1 - mid) >= x);
			} else {
				over = (natSum(mid) >= x);
			}

			if(over) {
				res = mid;
				right = mid-1;
			} else {
				left = mid + 1;
			}
		}
		cout << res << "\n";
	}
}

