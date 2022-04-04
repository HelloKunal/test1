#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	string s; cin >> s;
	if((s[s.length() - 1] - '0') % 2 == 0) cout << "0\n";
	else if((s[0] - '0') % 2 == 0) cout << "1\n";
	else {

		int cnt = 0;
		for(int i = 0; i < s.length(); i++) {
			if((s[i] - '0') % 2 == 0) cnt++;
		}

		if(cnt) cout << "2\n";
		else cout << "-1\n";
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

