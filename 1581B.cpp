#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((ll)(x).size())

#ifdef LOCAL
#include <prll.h>
#else
#define trace(...)
#define endl '\n'
#endif

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in lleractive problems
	ll tests; cin >> tests;
	for(ll test = 0; test < tests; test++) {
		ll n, m, k; cin >> n >> m >> k;
		if(k <= 1) cout << "NO\n";
		else if(k == 2) {
			if(n == 1 && m == 0) cout << "YES\n";
			else cout << "NO\n";
		}
		else {			
			if(n == 1 && m == 0) cout << "YES\n";
			else if(n == 1) cout << "NO\n";
			else {
				if(m < n-1) cout << "NO\n";
				else {
					ll dist = n - 1; // nodes from 1 to n
					ll res = 0;
					bool oneFlag = false;
					while(dist >= k-2) {
						for(ll i = 1; i + dist <= n; i++) {
							// connect(i, i+dist);
							res++;
						}
						
						dist = ceil(dist/2.0);
						if(dist == 1) {
							if(oneFlag) break;
							else oneFlag = true;
						}
					}
					
	//				cout << dist << " " << oneFlag << " " << res << "\n";
					if(oneFlag == true) {
						if(res == m) cout << "YES\n";
						else cout << "NO\n";
					}
					else if(res > m) cout << "NO\n";
					else cout << "YES\n";
				}	
			}
		}
	}
}


