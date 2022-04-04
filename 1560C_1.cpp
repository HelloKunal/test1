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
		int k; cin >> k;
		int j = floor(pow(k-1, 0.5));
		int a = pow(j, 2)+1;
		int b = pow(j+1, 2);
		int mid = (a+b) / 2;
		
		vector<int> res;
		if(mid == k) {
			res = {j, j};
		} else if(k < mid) {
			res = {k - a, j};
		} else {
			res = {j, b - k};
		}
		
		cout << res[0]+1 << " " << res[1]+1 << "\n";
	}
}


