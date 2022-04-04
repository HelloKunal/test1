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
		if(n % 3 == 2) {
			double c2 = n/3.0;
			int c1 = n - floor(2*c2), c2_i = floor(c2);
			cout << c2_i << " " << c1 << "\n";			
		} else {
			int c2 = n/3;
			int c1 = n - (2*c2);
			cout << c1 << " " << c2 << "\n";			
			
		}
	}
}


