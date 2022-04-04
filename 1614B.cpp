#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = pow(10, 9) + 7;

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> A(n+1);
	vector<int> orgArr(n+1);
	for(int i = 1; i < n+1; i++) {
		cin >> A[i].first;
		orgArr[i] = A[i].first;
		A[i].second = i;
	}
	A[0].first = INT_MAX; A[0].second = 0;
	sort(A.begin(), A.end(), greater<pair<int, int>>());
	vector<int> sol(n+1);
	int first = 0, last = n;
	int counter = n;
	bool side = true;
	if((n+1) % 2 == 0) side = false;
	for(int i = 0; i < n+1; i++) {
		if(side) {
			sol[last--] = A[counter--].second;
		} else {
			sol[first++] = A[counter--].second;
		}
		side = !side;
 	}
 	vector<int> res(n+1);
	for(int i = 0; i < n+1; i++) {
		res[sol[i]] = i;
	}

	int time = 0;
	int centralPos = res[0];
	for(int i = 1; i < n+1; i++) {
		// cout << res[i] << " " << centralPos << " ";
		// cout << A[i].first << "\n";
		time += abs(res[i] - centralPos) * orgArr[i] * 2;
		// cout << time << "\n";
	}
	cout << time << "\n";

 	for(int i = 0; i < n+1; i++) {
 		cout << res[i] << " ";
 	}

 	cout << "\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
	}
}

