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
		long long int iniP, jumps; cin >> iniP >> jumps;
		
		long long int res = iniP;
		if(jumps % 2 == 0) {
			if(iniP % 2 == 0) {
				if(jumps % 4 == 0) {
					res += 0;
				} else {
					res += 1;
				}
			} else {
				if(jumps % 4 == 0) {
					res += 0;
				} else {
					res -= 1;
				}
			}
		} else {			
			if(iniP % 2 == 0) {
				if((jumps-1) % 4 == 0) {
					res -= jumps;
				} else {
					res += jumps+1;
				}
			} else {
				if((jumps-1) % 4 == 0) {
					res += jumps;
				} else {
					res -= jumps+1;
				}
			}
		}
		
		cout << res << "\n";		
	}
}


