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
		
		int odd = 0, evev =0;
		for(int i = 0; i < 2*n; i++) {
			int t; cin >> t;
			if(t % 2 == 0) evev++;
			else odd++;
		}
		
		if(odd == evev) cout << "Yes\n";
		else cout << "No\n";
	}
}


