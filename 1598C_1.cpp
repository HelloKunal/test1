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
		long long int sumA = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sumA += a[i];
		}
		
		sumA *= 2;
		if(sumA % n != 0) {
			cout << "0\n";
		} else {
			sumA /= n;
			long long int res = 0;
			
			unordered_map<long long int, long long int> um;
			for(int i = 0; i < n; i++) {
				int rem = sumA - a[i];			
				res += um[rem];				
				um[a[i]]++;
			}
			
			cout << res << "\n";
		}
		
	}
}


