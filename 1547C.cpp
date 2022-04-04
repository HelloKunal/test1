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
		int k, n, m; cin >> k >> n >> m;
		vector<int> a(n);
		vector<int> b(m);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int j = 0; j < m; j++) cin >> b[j];
		
		int i = 0, j = 0, l = 0;
		vector<int> res(n+m);
		bool res_pos = true;
		while(i < n && j < m) {
			if(a[i] == 0) {
				res[l++] = 0;
				k++;
				i++;
			} else if(b[j] == 0) {
				res[l++] = 0;
				k++;
				j++;
			} else if(a[i] <= k) {
				res[l++] = a[i];
				i++;				
			} else if(b[j] <= k) {
				res[l++] = b[j];
				j++;
			} else {
				res_pos = false;
				break;
			}
		}
		
		while(res_pos && i < n) {
			if(a[i] == 0) {
				res[l++] = 0;
				k++;
				i++;
			} else if(a[i] <= k) {
				res[l++] = a[i];
				i++;
			} else {
				res_pos = false;
				break;
			}
		}
		while(res_pos && j < m) {
			if(b[j] == 0) {
				res[l++] = 0;
				k++;
				j++;
			} else if(b[j] <= k) {
				res[l++] = b[j];
				j++;
			} else {
				res_pos = false;
				break;
			}
		}
		
		if(res_pos) {
			for(int x : res) cout << x << " ";
			cout << "\n";
		} else {
			cout << "-1\n";
		}
	}
}


