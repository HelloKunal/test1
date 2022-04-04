#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

bool compare(char a, char b) {
	if(a == 'b' && b == 'c') return false;
	else if(a == 'c' && b == 'b') return true;
	return a < b;
}

void solve() {
	string s, t; cin >> s >> t;
	int countA = 0;
	for(char c : s) if(c == 'a') countA++;
	if(t == "abc" && countA) {
		sort(s.begin(), s.end(), compare);
	} else sort(s.begin(), s.end());

	cout << s;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}