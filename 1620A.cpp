#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	string s; cin >> s;
	int countE = 0, countNE = 0;
	for(char e : s) {
		if(e == 'E') countE++;
		else countNE++;
	}
	if(countNE == 1) cout << "NO\n";
	// else if(countNE == 1)	  cout << "YES\n";
	else cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}