#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

void solve() {
	int n; cin >> n;
	vector<int> A(n);
	int maxEle = 0;
	for(int i = 0; i < n; i++) {
		cin >> A[i];
		maxEle = max(maxEle, A[i]);
	}
	if(maxEle == A[n-1]|| maxEle == A[0]) {
		reverse(A.begin(), A.end());
		for(int i : A) cout << i << " ";
		cout << "\n";
	} else {
		cout << "-1\n";
	}
	

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

