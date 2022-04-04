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

string solve() {
	string s; cin >> s;
	char high = '!';
	int start = 0, end = s.length()-1;
	if(s.length() == 1) {
		high = s[0];
	} else {
		while (end - start >= 0) {
//			cout << high << "\n";
			bool left = false;
			if(s[start] > s[end]) {
				left = true;
			}
			
			if(high == '!') {
				high = left ? s[start] : s[end];				
				if(left) start++;
				else end--;	
				continue;			
			}
			
			char temp_high = left ? s[start] : s[end];
			if(temp_high != high-1) return "NO";			
			high = temp_high;
			if(left) start++;
			else end--;
					
		}
	}
	
	if(high == 'a') return "YES";
	return "NO";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		cout << solve() << "\n";
	}
}


