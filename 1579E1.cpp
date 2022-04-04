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
		int first; cin >> first;
		list<int> dq = {first};
		for(int i = 1; i < n; i++) {
			int t; cin >> t;
			if(t < dq.front()) {
				dq.push_front(t);
			} else {
				dq.push_back(t);
			}
		}
		
		for(int i : dq) {
			cout << i << " ";
		}		
		cout << "\n";
	}
}


