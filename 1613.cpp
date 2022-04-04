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
		int x1, p1; cin >> x1 >> p1;
		int x2, p2; cin >> x2 >> p2;

		while(x1 <= 1000000 && p1 > 0) {
			x1 *= 10;
			p1--;
		}
		while(x2 <= 1000000 && p2 > 0) {
			x2 *= 10;
			p2--;
		}

		if(p1 > p2) cout << ">\n";
		else if(p1 < p2) cout << "<\n";
		else {
			if(x1 > x2) cout << ">\n";
			else if(x1 < x2) cout << "<\n";
			else cout << "=\n";
		}
	}
}

