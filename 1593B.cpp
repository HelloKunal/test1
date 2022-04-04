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
		string s; cin >> s; int sLen = s.length();
		
		int res = 0;
		int res1 = INT_MAX, res2 = INT_MAX;
		
		bool done = false;
		for(int i = sLen-1; i >= 0; i--) {
			if(s[i] == '0') {
				for(int j = i-1; j >= 0; j--) {
					if(s[j] == '5' || s[j] == '0') {
						res1 = (sLen-1-i)+(i-j-1);
						done = true;
						break;
					}
				}
			}
			
			if(done) break;
		}
		
		done = false;
		for(int i = sLen-1; i >= 0; i--) {
			if(s[i] == '5') {
				for(int j = i-1; j >= 0; j--) {
					if(s[j] == '2' || s[j] == '7') {
						res2 = (sLen-1-i)+(i-j-1);
						done = true;
						break;
					}
				}
			}
			
			if(done) break;
		}
		
		res = min(res1, res2);
		cout << res << "\n";
	}
}


