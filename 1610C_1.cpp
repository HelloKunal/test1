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
int maxNum = 0;
void doCal(vector<int>& a, vector<int> &b, int i, int num, int lastA, vector<vector<vector<bool>>>& memo) {
	if(i >= a.size()) return;
	if(b[i] >= num) {
		maxNum = max(num+1, maxNum);
		if(lastA == -1) lastA = a[i];
		else {
			lastA = min(lastA-1, a[i]);
		}
		if(lastA <= 0) {
			return;
		}
		if(num+(a.size()-(i+1)) < maxNum) {
//			cout << "SKIPPED\n";
			return;
		}
		if(memo[i][num][lastA]) return;
		memo[i][num][lastA] = true;
		doCal(a, b, i+1, num+1, lastA, memo);
	}
	if(num+(a.size()-(i+1)) < maxNum) {
//		cout << "SKIPPED\n";
		return;
	}
	if(memo[i][num][lastA]) return;
	memo[i][num][lastA] = true;
	doCal(a, b, i+1, num, lastA, memo);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<vector<vector<bool>>> memo(n+1, vector<vector<bool>>(n+1, vector<bool>(n+1,false)));
		vector<int> a(n);
		vector<int> b(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			cin >> b[i];
		}
		maxNum = 0;
		doCal(a, b, 0, 0, -1, memo);
		cout << maxNum << "\n";
	}
}