#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	if((a + b + 2) > n || abs(a - b) > 1) cout << "-1";
	else {
		if(a > b) {
			int start = 1, end = n;
			while(a != 0) {
				cout << start << " " << end << " ";
				a--;
				b--;
				start++;
				end--;
			}

			for(int k = end; k >= start; k--) {
				cout << k << " ";
			}
		} else if(b > a) {
			int start = 1, end = n;
			while(b != 0) {
				cout << end << " " << start << " ";
				a--;
				b--;
				start++;
				end--;
			}

			for(int k = start; k <= end; k++) {
				cout << k << " ";
			}
		} else {
			int start = 1, end = n;
			while(a != 0) {
				cout << start << " " << end << " ";
				a--;
				b--;
				start++;
				end--;
			}

			for(int k = start; k <= end; k++) {
				cout << k << " ";
			}			
		}
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}