#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = pow(10, 9) + 7;

int minSum = INT_MAX;
void solve(int i, vector<int>& a, int sum, int k, vector<bool>& vis)
 {	
 	while(i > 0 && vis[i]) i--;
	if(sum >= minSum) return;
	if(i <= 0 || k <= 0) {
		for(int i = 0; i < a.size(); i++) {
			if(!vis[i]) sum += a[i];
		}
		minSum = min(sum, minSum);
		return;
	}

	vis[i] = true;
	for(int j = i-1; j >= 0; j--) {
		if(j != i-1 && a[j] == a[j+1]) continue;
		if(!vis[j] && (a[j]/a[i]) <= 1) {
			vis[j] = true;
			solve(i-1, a, sum + (a[j]/a[i]), k-1, vis);
			vis[j] = false;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		vector<bool> vis(n, false);
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), greater<int>());
		solve(n-1, a, 0, k, vis);
		cout << minSum << "\n";
	}
}



	// // priority_queue<int> pq;
	// int n, k; cin >> n >> k;
	// vector<int> a(n);
	// for(int i = 0; i < n; i++) cin >> a[i];
	// sort(a.begin(), a.end(), greater<int>());

	// int res1 = 0;
	// int i = 0;
	// for(int j = 0; j < k && i <= n-2; i+=2, j++) {
	// 	int first = a[i];
	// 	int second = a[i+1];
	// 	res1 += floor(second / first); 
	// }

	// while(i < n) {
	// 	res1 += a[i++];
	// }

	// int res2 = 0;
	// int start = 0, end = n-1;
	// int j = 0;
	// while(start < end && j < k) {
	// 	res2 += floor(a[end] / a[start]);
	// 	start++;
	// 	end--;
	// 	j++;
	// }
	// while(start <= end) {
	// 	res2 += a[start++];
	// }

	// int res3 = 0;
	// int start1 = 0, end1 = min((int)pow(2, k)-1, n-1);
	// int j1 = 0;
	// while(start1 < end1 && j1 < k) {
	// 	res3 += floor(a[end1] / a[start1]);
	// 	start1++;
	// 	end1--;
	// 	j1++;
	// }
	// while(end1+1 < n) {
	// 	res3 += a[end1++ + 1];
	// }

	// cout << res3 << "\n";