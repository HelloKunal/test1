#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	string res = "";
	char prev = s[1];
	res += s[0];
	bool doneOp = false;
	for(int i = 0; i < n-3; i++) {
		cin >> s;
		if(s[0] == prev) {
			res += prev;
		} else {
			res += prev;
			res += s[0];
			doneOp = true;
		}
		prev = s[1];
	}

	if(!doneOp) {
		res += s[1];
		res += s[1];
	} else res += s[1];

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

