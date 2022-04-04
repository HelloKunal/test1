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
		long int n, m; cin >> n >> m;
		if(n == 1 && m == 1) {
			cout << "0\n";
		} else if(n == 1 || m == 1) {
			cout << 1 << "\n";
		} else {
			cout << "2\n";
		}
	}
}


