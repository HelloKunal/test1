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
		int maxStone = INT_MIN, maxPos;
		int minStone = INT_MAX, minPos;
		for(int i = 1; i <= n; i++) {
			int t; cin >> t;
			if(t > maxStone) {
				maxStone = t;
				maxPos = i;
			}
			if(t < minStone) {
				minStone = t;
				minPos = i;
			}
		}
		
		int res = min((min(maxPos, minPos) + min(n-maxPos+1, n-minPos+1)), min(max(maxPos, minPos), max(n-maxPos+1, n-minPos+1)));
		cout << res << "\n";
	}
}


