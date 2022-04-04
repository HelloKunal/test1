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
		vector<int> a(n);
		
		int maxEle = INT_MIN;
		double sumA = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			maxEle = max(maxEle, a[i]);
			sumA += a[i];
		}
		
		double res = maxEle + (sumA - maxEle)/(n-1);
		cout << setprecision(11) << res << "\n";		
	}
}


