#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
// 	cout << "YES\n";
// 	cout << s << "\n";
	int mid = (k)/2;
	string res = "";	
	int start = mid-1, end = mid+1;
	if(k % 2 == 1) {
		res += s[mid];
	} else end = mid;
// 	cout << res << "\n";
	while(start >= 0) {
		res += s[end];
		res += s[start];
		end++;
		start--;
	}

	res += s.substr(k);
	cout << res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}