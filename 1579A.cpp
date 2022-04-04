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

string ans(int A, int B, int C) {	
	if(B < A) return "NO\n";
	B -= A;
	if(B < C) return "NO\n";
	B -= C;
	if(B > 0) return "NO\n";
	return "YES\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); // Remove in interactive problems
	int tests; cin >> tests;
	for(int test = 0; test < tests; test++) {
		string s; cin >> s;
		int A = 0, B = 0, C = 0;
		for(char c : s) {
			switch(c) {
				case 'A':
					A++;
					break;
				case 'B':
					B++;
					break;
				case 'C':
					C++;
					break;
			}
		}
//		
//		cout << A << " " << B << " " << C << "\n";
		cout << ans(A, B, C);
	}
}


