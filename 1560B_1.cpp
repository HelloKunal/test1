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
		int a, b, c; cin >> a >> b >> c;
		int diff = abs(b - a);
		if(max(a, b) <= diff*2) {
			if(c <= diff*2) {
				int d = (c + diff) % (diff*2);
				if(d == 0) d = diff*2;
				cout << d << "\n";
			} else {
				cout << "-1\n";
			}
		} else {
			cout << "-1\n";
		}
	}
}


