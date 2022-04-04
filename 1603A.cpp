#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n; cin >> n;
		vector<int> arr(n+1);
		for(int i = 1; i <= n; i++) cin >> arr[i];

		int N = n;
		bool skipped = false;
		bool noChange = true;
		for(int i = N; i >= 1; i--) {
			if(arr[i] % (i+1) != 0) {
				// cout << arr[i] << "\n";
				// cout << *(arr.begin()+i) << "\n";
				arr.erase(arr.begin()+i);
				N--;
				noChange = false;
				i = N+1;
			} else {
				skipped = true;
			}
			if(i == 1 && skipped && !noChange) {
				i = N+1;
				noChange = true;
				skipped = false;
			}
		}
		// for(int i = 1; i <= N; i++) cout << arr[i] << " ";
		// cout << "\n"; 
		if(arr.size() == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}

