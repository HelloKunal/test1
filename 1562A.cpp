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
		int l, r; cin >> l >> r;
		
		int res = 0;
		if((l*2)-1 <= r) {
			int start = l, end = r;
			while(end > start) {
				int mid = (start+end)/2;
				if((mid*2)-1 <= r) l = mid, start = mid+1;
				else end = mid;
			}
			
			res = l-1;
		} else {
			res = r%l;
		}
		
		cout << res << "\n";
	}
}


