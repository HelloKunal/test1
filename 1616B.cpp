#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int i = 0;
	bool change = false;
	while(i < n-1 && s[i] > s[i+1]) {change = true; i++;}
	while(change && i < n-1 && s[i] >= s[i+1]) i++;
	string res = s.substr(0, i+1);
	string temp = res;
	reverse(temp.begin(), temp.end());
	res += temp;
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