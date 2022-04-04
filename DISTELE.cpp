#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int mod = pow(10, 9) + 7;

void solve() {
	int N; cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++) cin >> A[i];
	
	map<int, int> freq;
	ll res = 1;

	for(int ele : A) freq[ele]++;

	for(auto ele : freq) {
		res *= (ele.second + 1);
		res %= mod;
	}

	res = (res - 1 + mod) % mod;

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

