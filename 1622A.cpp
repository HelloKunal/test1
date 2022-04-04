#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

void solve() {
	vector<int> a(3);
	cin>>a[0]>>a[1]>>a[2];
	bool res = false;
	if(a[0] == a[1] && a[1] == a[2]) {
		if(a[0] % 2 == 0 || a[1] % 2 == 0 || a[2] % 2 == 0) res = true;		
	} else if(a[0] == a[1]) {
		if(a[2] % 2 == 0) res = true;		
	} else if(a[1] == a[2]) {
		if(a[0] % 2 == 0) res = true;
	} else if(a[0] == a[2]) {
		if(a[1] % 2 == 0) res = true;		
	} else {
		sort(a.begin(), a.end());
		if(a[2] == (a[1] + a[0])) res = true;		
	}
	
	if(res) cout<<"YES";
	else cout<<"NO";
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

