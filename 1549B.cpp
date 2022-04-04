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
		string a, b; cin >> a >> b;
		
		int res = 0;
		for(int i = 0; i < n; i++) {
			if(b[i] == '1') {
				if(a[i] == '0') {
					a[i] = '2';
					res++;
				} else {
					if(i-1 >= 0 && a[i-1] == '1') {
						a[i-1] = '2';
						res++;
					} else if(i+1 < n && a[i+1] == '1') {
						a[i+1] = '2';
						res++;
					}
				}
			}
		}
		
		cout << res << "\n";
	}
}


