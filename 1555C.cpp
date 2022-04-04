#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int m; cin >> m;
		int Arr[2][m];
		int res1 = 0, res2 = 0;
		for(int i = 0; i < m; i++) {
			cin >> Arr[0][i];
			res1 += Arr[0][i];
		}
		for(int i = 0; i < m; i++) cin >> Arr[1][i];

		int res = INT_MAX;
		for(int i = 0; i < m; i++) {
			res1 -= Arr[0][i];
			res = min(res, max(res1, res2));
			res2 += Arr[1][i];
		}

		cout << res << "\n";
	}
}

