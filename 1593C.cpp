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
		int n, k; cin >> n >> k;
		vector<int> x(k);
		for(int i = 0; i < k; i++) {
			cin >> x[i];
		}
		
		sort(x.begin(), x.end());
		int res = 0, low = 0, j = k-1;
		while(j >= 0 && x[j] > low) {
			res++;
			low += n - x[j];
			j--;
		}
		
		cout << res << "\n";
	}
}


