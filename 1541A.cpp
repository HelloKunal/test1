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
		int n, m; cin >> n;
		if(n % 2 == 0) m = n/2;
		else m = n/2 - 1;
		for(int i = 1; i <= 2*m; i+=2) {
			cout << i+1 << " " << i << " ";
		}
		if(n % 2 == 1) {
			cout << n-1 << " " << n << " " << n-2;
		}
		cout << "\n";
	}
}


