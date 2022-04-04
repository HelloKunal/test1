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
		int n, x; cin >> n >> x;
		vector<int> A(n);
		for(int i = 0; i < n; i++) cin >> A[i];
		
		vector<int> B = A;
		sort(B.begin(), B.end());
		int diff = n - x;
		string res = "YES";
		for(int i = diff; i < n-diff; i++) {
			if(B[i] != A[i]) {
				res = "NO";
				break;
			}
		}
		
		cout << res << "\n";
	}
}


