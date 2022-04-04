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
		int c, d; cin >> c >> d;
		if(c == d && c == 0) cout << "0\n";
		else if(c == d) cout << "1\n";
		else if((c+d) % 2 == 0) cout << "2\n";
		else cout << "-1\n";
	}
}


