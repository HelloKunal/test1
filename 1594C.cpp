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
		char c; cin >> c;
		string s; cin >> s;
		
		bool ans = true;
		for(char t : s) {
			if(t != c) {
				ans = false;
				break;
			}
		}
		
		if(ans) {
			cout << 0 << "\n"; 
		} else {			
			int strLen = s.length();
			int start = strLen/2;
			start--;
			for(int i = strLen-1; i > start; i--) {
				if(s[i] == c) {
					ans = true;
					cout << "1\n" << i+1 << '\n';
					break;
				}
			}
			
			if(!ans) {
				cout << "2\n" << strLen << " " << strLen-1 << "\n";
			}
		}
		
	}
}


