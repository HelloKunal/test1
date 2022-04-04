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
		string l1, l2; cin >> l1 >> l2;
		string res = "YES";
		for(int i = 0; i < n; i++) {
			if(l1[i] == '1' && l2[i] == '1') {
				res = "NO";
				break;
			}
		}
		
		cout << res << "\n";
	}
}


