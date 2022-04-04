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
		vector<int> arr(n);
		int s = 0;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			s += arr[i];
		}
		
		double k = s*1.0/n;
		if(k > 1) {
			cout << s - n << "\n";
		} else if(k < 1) cout  << "1\n";
		else cout << "0\n";
	}
}


