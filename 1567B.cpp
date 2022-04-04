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

int solve(){
	int a, b; cin >> a >> b;
	if(a == 0 && b == 0) return 2;
	else if(a == 0) return 1; 
	else {
		int xorall = 0;
		int k = (a-1) % 4;
		switch(k) {
			case 0:
				xorall = (a-1);
				break;
			case 1:
				xorall = 1;
				break;
			case 2:
				xorall = a;
				break;
			case 3:
				xorall = 0;
		}
		if(xorall == b) return a;
		
		int c = xorall ^ b;
		if(c == a) {
			return a+2;
		} else {
			return a+1;
		}
	}
	
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		cout << solve() << "\n";
	}
}


