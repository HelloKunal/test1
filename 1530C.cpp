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

int calSum(vector<int>& A, int n) {
	int req = n - (n/4);
	int sum = 0;
	for(int i = 100; i >= 0 && req > 0; i--) {
		sum += i*min(req, A[i]);
		req -= min(req, A[i]);
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> a(101);
		vector<int> b(101);
		for(int i = 0; i < n; i++) {
			int t; cin >> t;
			a[t]++;
		}
		for(int j = 0; j < n; j++) {
			int t; cin >> t;
			b[t]++;
		}		
		
		int res = 0;
		int sumA = calSum(a, n);
		int sumB = calSum(b, n);
		
		while(sumA < sumB) {
			a[100]++;
			b[0]++;
			n++;
			res++;
			sumA = calSum(a, n);
			sumB = calSum(b, n);
		}
		
		cout << res << "\n";
	}
}


