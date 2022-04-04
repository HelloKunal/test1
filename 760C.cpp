#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int gcd1 = a[0];
	int gcd2 = a[1];
	bool counter = true;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(counter) {
			gcd1 = __gcd(gcd1, a[i]);
		} else gcd2 = __gcd(gcd2, a[i]);
		counter = !counter;
	}

	// cout << gcd1 << " " << gcd2 << "\n";
	counter = true;
	bool possible2 = true;
	bool possible1 = true;
	for(int i = 0; i < n; i++) {
		if(counter) {
			if(a[i] % gcd2 == 0) {
				possible2 = false;
			}
		} else {
			if(a[i] % gcd1 == 0) {
				possible1 = false;
			}
		}

		counter = !counter;
	}

	if(possible2) {
		cout << gcd2 << "\n";
	} else if(possible1) {
		cout << gcd1 << "\n";
	} else {		

		int gcdc = __gcd(gcd1, gcd2);
		gcd1 /= gcdc;
		gcd2 /= gcdc;
		if(gcd1 != 1 && gcd2 != 1) {
			possible2 = true;
			possible1 = true;
			for(int i = 0; i < n; i++) {
				if(counter) {
					if(a[i] % gcd2 == 0) {
						possible2 = false;
					}
				} else {
					if(a[i] % gcd1 == 0) {
						possible1 = false;
					}
				}

				counter = !counter;
			}

			if(possible2) {
				cout << gcd2 << "\n";
			} else if(possible1) {
				cout << gcd1 << "\n";
			} else {
					cout << "0\n";
				}
		} else {
			cout << "0\n";
		}
	}

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

