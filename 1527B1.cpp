#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		string s; cin >> s;
		int zeroCount = 0;
		for(char c : s) if(c == '0') zeroCount++;
		
		if(zeroCount % 2 == 0) {
			cout << "BOB\n";
		} else if(zeroCount == 1) {
			cout << "BOB\n";
		} else if(zeroCount == 3) {
			cout << "ALICE\n";
		}else {
			zeroCount %= 4;
			if(zeroCount == 1) {
				cout << "ALICE\n";
			} else {
				cout << "ALICE\n";
			}
		}
	}
}


