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
		string s; cin >> s;
		
		int res = INT_MAX;
		for(char c = 'a'; c <= 'z'; c++) {
			
			int first = 0, last = s.length()-1;
			int count = 0;
			while(first < last) {
				if(s[first] == s[last]) {
					first++;
					last--;
					continue;
				} else {
					if(s[first] == c) {
						first++;
						count++;
						continue;
					} else if(s[last] == c) {
						last--;
						count++;
						continue;
					} else {
						count = INT_MAX;
						break;
					}
				}
			}
			
			if(first >= last) res = min(res, count);
		}
		
		res = (res == INT_MAX) ? -1 : res;
		cout << res << "\n";
	}
}


