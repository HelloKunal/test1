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
		ll n, k; cin >> n >> k;
		ll curr = 1, ans = 0;
		while(curr < k) {
			curr *= 2;
			ans++;
		}
		
		if(curr < n) {
			ans += (n - curr + (k - 1)) / k;
		}
		cout << ans << "\n";	
	}
}


