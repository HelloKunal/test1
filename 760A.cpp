#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int b1, b2, b3, b4, b5, b6, b7;
	cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7;
	cout << b1 << " " << b2 << " " << (b7 - b1 - b2) << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

