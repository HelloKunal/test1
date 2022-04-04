#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	string S; cin >> S;
	int N = S.length();
	int ab = 0, ba = 0;
	for(int i = 1; i < N; i++) {
		if(S[i-1] == 'a' && S[i] == 'b') ab++;
		else if(S[i-1] == 'b' && S[i] == 'a') ba++;
	}

	if(ab == ba) cout << S;
	else if(ab > ba) {
		if(S[0] == 'b') {
			S[0] = 'a';
		} else {
			S[0] = 'b';
		}

		cout << S;
	} else {
		if(S[N-1] == 'a') {
			S[N-1] = 'b';
		} else {
			S[N-1] = 'a';
		}
		cout << S;
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