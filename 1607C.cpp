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
		int n; cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr.begin(), arr.end());
		int i = 0;
		long int add = 0;
		while(i+1 < n && arr[i] + add < 0) {
			add += abs(arr[i] + add);
			i++;
		}
		long int maxpos = INT_MIN;
		while(i+1 < n) {
			maxpos = max(arr[i] + add, maxpos);
			add -= (arr[i] + add);
			i++;
		}
		
		cout << max(maxpos, arr[i] + add) << "\n";
	}
}


