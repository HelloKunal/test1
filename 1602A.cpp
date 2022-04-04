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
		
		char minChar = 'z'+1;
		int minPos;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] < minChar) {
				minChar = s[i];
				minPos = i;
			}
		}
		
		cout << minChar << " " << s.substr(0, minPos) + s.substr(minPos+1) << "\n";
	}
}


