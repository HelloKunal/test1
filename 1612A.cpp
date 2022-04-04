#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int x, y; cin >> x >> y;
	for(int i = 0; i <= 51; i++) {
		for(int j = 0; j <= 51; j++) {
			if(2*(i + j) == x + y && 2*(abs(i-x)+abs(j-y)) == x + y) {
				cout << i << " " << j << "\n";
				return;
			}
		}
	}

	cout << "-1 -1\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

