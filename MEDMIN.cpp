#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;


void solve() {
	int N; cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++) cin >> A[i];

	sort(A.begin(), A.end());
	int res = abs(A[(N+1)/2 - 1] - A[(N+1)/2 - 2]);
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