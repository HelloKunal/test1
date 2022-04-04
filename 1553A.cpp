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
		string s; cin >> s;
		int sLen; sLen = s.length();
		
		int res = 0;
		for(int i = sLen-1; i >= 0; i--) {
			if(i == sLen-1) {
				if(s[i] == '9') res++;
			} else {
				res += pow(10, sLen - 1 - i - 1) * (s[i] - '0');
			}
		}
		
		cout << res << "\n";
	}
}


