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
		
		int count1 = 0, count2 = 0;
		int xC = 0, yC = 0;
		int xQ = 0, yQ = 0;
		
		int res = -1;
		for(int i = 0; i < sLen; i++) {
			if(i % 2 == 0) {
				count1++;
				if(s[i] == '1') xC++;
				else if(s[i] == '?') xQ++;				
			} else {
				count2++;				
				if(s[i] == '1') yC++;
				else if(s[i] == '?') yQ++;
			}
			
			int rem2 = 5 - (count2);
			if(xC + xQ > yC + rem2) {
				res = i+1;
				break;
			}
				
			int rem1 = 5 - (count1);
			if(yC + yQ > xC + rem1) {
				res = i+1;
				break;
			}
		}
		
		if(res == -1) res = 10;
		cout << res << "\n";
	}
}


