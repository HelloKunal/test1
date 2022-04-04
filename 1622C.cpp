#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;
#define vi vector<int>

int n, k;
vector<int> a(200001);
int sum;

int chk(int x) {
	int tempsum = sum;
	tempsum -= x;
	int mi = a[0] - x;
	int steps = 0;
	for(int i = n-1; i >= 1 && tempsum > k; i--) {
		tempsum -= a[i];
		tempsum += mi;
		steps++;
	}
	cout << tempsum << "\n";
	if(tempsum <= k) return steps;
	else return -1;
}

void solve() {
	cin>>n>>k;
	sum = 0;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
		sum += a[i];
	}
	if(sum <= k) cout << "0\n";
	else {
		sort(a.begin(), a.end());
		int start = 1, end = sum-k;
		int res = INT_MAX;
		while(start <= end) {
			cout << start << " " << end << " ";
			int mid = (start + end) / 2;
			int chkInt = chk(mid);
			if(chkInt != -1) {
				cout << "pass\n";
				end = mid - 1;
				res = min(res, mid + chkInt);
			} else {
				cout << "fail\n";
				start = mid + 1;
			}
		}
		
		cout<<res<<'\n';
	}
}

int32_t main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		solve();
        cout << "\n";
	}
}

