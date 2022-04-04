#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


bool solve() {
	string s; cin >> s;
	int n = s.length();
	if(n % 2 == 1) {
		return false;
	} else {
		int m = n/2;
		for(int i = 0, j = m; i < m; i++, j++) {
			if(s[i] != s[j]) return false;
		}

		return true;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		if(solve()) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}