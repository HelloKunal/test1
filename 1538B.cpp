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
		int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		if(sum % n != 0) cout << "-1\n";
		else {
			int b = sum / n;
			int res = 0;
			for(int i = 0; i < n; i++) {
				if(a[i] - b > 0) res++;
			}
			
			cout << res << "\n";
		}
	}
}


