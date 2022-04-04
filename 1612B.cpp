#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	if(a > b) {
		if(a == (n/2)+1 && b == n/2) {
			vector<int> sol(n+1);
			sol[1] = a;
			for(int i = 2, j = a+1; i <= n/2; i++, j++) {
				sol[i] = j;
			}
			for(int i = (n/2)+1, j = 1; i < n; i++, j++) {
				sol[i] = j;
			}
			sol[n] = b;
			for(int i = 1; i <= n; i++) cout << sol[i] << " ";
			cout << "\n";
		} else {
			cout << "-1\n";
		}
	} else {
		if(abs(n - b) <= (n/2 - 1) && (a - 1) <= (n/2 - 1)) {
			vector<int> sol(n+1);
			sol[1] = a;
			int counter = 2;
			for(int i = counter, j = b+1; i <= n/2 && j <= n; i++, j++, counter++) {
				sol[i] = j;
			}
			for(int i = counter, j = a+1; i <= n && j < b; i++, j++, counter++) {
				sol[i] = j;
			}
			for(int i = counter, j = 1; i <= n && j < a; i++, j++, counter++) {
				sol[i] = j;
			}
			sol[n] = b;

			for(int i = 1; i <= n; i++) cout << sol[i] << " ";
			cout << "\n";
		} else {
			cout << "-1\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

