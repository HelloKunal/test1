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
		int sLen = s.length();
		
		string res = "";
		for(int i = 0; i < sLen; i++) {
			if(s[i] == 'L') {
				res += "LR";
				i++;
			} else if(s[i] == 'U') {
				res += "D";
			} else if(s[i] == 'D') {
				res += "U";
			} else {
				res += "LR";
				i++;
			}
		}
		
		cout << res << "\n";
	}
}


